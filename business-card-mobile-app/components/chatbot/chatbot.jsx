import { Audio } from "expo-av";
import React from "react";
import { StyleSheet, View } from "react-native";
import {
  getTextToSpeechUri,
  speechToText,
  textToAssistant,
} from "../../utils/server/watson.utils";
import WatermarkLogo from "../watermarkLogo";
import ChatListView from "./chat";
import ChatMicInput from "./chatInput";
import PropTypes from "prop-types";
import { checkAndExecuteTrigger } from "./phraseTriggers";

const ChatBot = (props) => {
  // State
  const [recording, setRecording] = React.useState(false);
  const [chatHistory, setChatHistory] = React.useState([]);
  const [playLoading, setPlayLoading] = React.useState(false);
  const [sound, setSound] = React.useState();

  // Watson assistant session state tracking - initially empty string
  const [watsonSessionId, setWatsonSessionId] = React.useState("");

  /*
  PROPS (type checking below component code)
  props.onRecording - while the user is recordinga message
  props.onSpeechProcessing - while STT and TTS is processing, awaiting responses from IBM Cloud
  props.onResponse - Chatbot response (text + audio have arrived)
  props.onFinishResponse - Chatbot response audio has finished playing
  props.ar - to pass to chathistory to render items with more top padding i.e. higher opacity in MAskedView
  */

  async function startRecording() {
    try {
      // await Audio.requestPermissionsAsync();
      await Audio.setAudioModeAsync({
        allowsRecordingIOS: true,
        playsInSilentModeIOS: true,
      });
      // console.log("Starting recording..");
      const recording = new Audio.Recording();
      await recording.prepareToRecordAsync(
        // configuring custom formats as android default m4a not compatible with watson API
        // Audio codec will be checked/converted server side to be compatible with Watson
        {
          android: {
            extension: ".wav",
            outputFormat: Audio.RECORDING_OPTION_ANDROID_OUTPUT_FORMAT_MPEG_4,
            audioEncoder: Audio.RECORDING_OPTION_ANDROID_AUDIO_ENCODER_AAC,
            sampleRate: 44100,
            numberOfChannels: 2,
            bitRate: 128000,
          },
          ios: {
            extension: ".wav",
            outputFormat: Audio.RECORDING_OPTION_IOS_OUTPUT_FORMAT_MPEG4AAC,
            audioQuality: Audio.RECORDING_OPTION_IOS_AUDIO_QUALITY_HIGH,
            sampleRate: 44100,
            numberOfChannels: 2,
            bitRate: 128000,
            linearPCMBitDepth: 16,
            linearPCMIsBigEndian: false,
            linearPCMIsFloat: false,
          },
        }
        // Audio.RECORDING_OPTIONS_PRESET_HIGH_QUALITY
      );
      await recording.startAsync();
      setRecording(recording);
      // console.log("Recording started");
      if (props.onRecording) props.onRecording(); // run prop function passed from parent
    } catch (err) {
      console.error("Failed to start recording", err);
    }
  }

  async function stopRecording(speech = true) {
    // console.log("Stopping recording..");
    setPlayLoading(true);
    if (props.onSpeechProcessing) props.onSpeechProcessing(); // run prop function passed from parent
    setRecording(false);
    await recording.stopAndUnloadAsync();
    const uri = recording.getURI();

    // Send recording to watson, trigger STT
    try {
      var sentText = await speechToText(uri);
    } catch (error) {
      console.log(error);
      // display error to user
      setChatHistory([
        ...chatHistory,
        {
          sent: -1,
          text: error.toString(),
        },
      ]);
      setPlayLoading(false);
      return;
    }

    // handle if results - empty array - i.e. no speech/text recognised from audio
    if (sentText.results == false) {
      // console.log("No speech recognised");
      setChatHistory([
        ...chatHistory,
        {
          sent: -1,
          text: "No speech recognised. Did you say something?",
        },
      ]);
      setPlayLoading(false);
      // no need to continue function and retrive/play any audio or get response
      return;
    }
    // if speech recognised -> update chat history state with new text
    setChatHistory([
      ...chatHistory,
      {
        // id: (chatHistory.length + 1).toString(),
        sent: 1,
        text: sentText.results[0].alternatives[0].transcript,
        // confidence:
      },
    ]);

    // send text to assistant and handle Watson response,
    try {
      var watsonResult = await textToAssistant(
        sentText.results[0].alternatives[0].transcript,
        watsonSessionId,
        speech
      );
    } catch (error) {
      // display error in chat
      setChatHistory([
        ...chatHistory,
        {
          sent: -1,
          text: error.toString(),
        },
      ]);
      setPlayLoading(false);
      return;
    }

    // needs to be accessed outside block scope for phrase triggers;
    var chatResponse = watsonTextResponseHandler(watsonResult);

    // update chat history
    setChatHistory(
      (prevState) => {
        return [...prevState, ...chatResponse];
      } //, checkAndExecuteTrigger(chatResponse[chatResponse.length - 1])
    );

    setPlayLoading(false);
    // Watson response recieved -> run prop function passed from parent
    if (props.onResponse) props.onResponse();

    // for each itme in array, get value for text and add to new chat object
    function watsonTextResponseHandler(res) {
      // TODO - handler for specific text responses (onDance, open phone, open email)
      let watsonReply = [];
      for (let i = 0; i < res.output.generic.length; i++) {
        watsonReply.push({
          // id: (chatHistory.length + 1 + i).toString(),
          sent: 0,
          text: res.output.generic[i].text,
        });
      }
      return watsonReply;
    }

    // check if session needs updating
    if (watsonResult.output.session_id != watsonSessionId) {
      setWatsonSessionId(watsonResult.session_id);
    }

    //  Play sound
    // get audio array uris
    const audio = watsonResult.speech_urls.map((uri) =>
      getTextToSpeechUri(uri)
    );

    // Play recieved audio function
    const playSpeech = async (audioUriArray) => {
      for (let i = 0; i < audioUriArray.length; i++) {
        // handle no Watson speech response
        if (audioUriArray[i] != null) {
          playSound(
            audioUriArray[i],
            // once played check for custom phrase triggers from most recent response defined in phraseTriggers.js & execute corresponding function if found
            () => checkAndExecuteTrigger(chatResponse[chatResponse.length - 1])
          );
        } else {
          // console.log("No audio returned from Watson Text to Speech.");
          if (props.onFinishResponse) {
            setTimeout(props.onFinishResponse(), 4000); // run prop function passed from parent after timeout
          }
          // phrase trigger function
          setTimeout(
            checkAndExecuteTrigger(chatResponse[chatResponse.length - 1]),
            4000
          );
        }
      }
    };

    // Call play audio
    playSpeech(audio);
  }

  async function playSound(uri, onFinishTrigger) {
    // console.log("Loading Sound");
    const { sound } = await Audio.Sound.createAsync({
      uri: uri,
    });
    setSound(sound);

    console.log("Playing Sound");
    await sound.playAsync();
    sound.setOnPlaybackStatusUpdate((playbackStatus) => {
      // once audio finished playing
      if (playbackStatus.didJustFinish) {
        if (props.onFinishResponse) {
          props.onFinishResponse(); // run prop function passed from parent
        }
        onFinishTrigger(); // run phrase trigger function
      }
    });
  }

  React.useEffect(() => {
    return sound
      ? () => {
          // unload sound
          sound.unloadAsync();
        }
      : undefined;
  }, [sound]);

  return (
    <View style={styles.container}>
      <ChatListView chatArray={chatHistory} ar={props.ar} />
      <View style={styles.micView}>
        <ChatMicInput
          onPress={!recording ? startRecording : stopRecording}
          recording={recording}
          loading={playLoading}
        />
      </View>
      <WatermarkLogo />
    </View>
  );
};

// Type checking for props
ChatBot.propTypes = {
  onRecording: PropTypes.func,
  onSpeechProcessing: PropTypes.func,
  onResponse: PropTypes.func,
  onFinishResponse: PropTypes.func,
  ar: PropTypes.bool,
};

const styles = StyleSheet.create({
  micView: {
    position: "absolute",
    bottom: 30,
    left: 10,
    right: 10,
    zIndex: 2,
  },
  container: { flex: 1, backgroundColor: "black" },
});

export default ChatBot;
