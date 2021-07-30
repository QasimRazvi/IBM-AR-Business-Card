import { useFocusEffect } from "@react-navigation/native";
import { HeaderBackButton } from "@react-navigation/stack";
import { Audio } from "expo-av";
import React from "react";
import { BackHandler, StyleSheet, View } from "react-native";
import ChatListView from "../components/chatbot/chat";
import ChatMicInput from "../components/chatbot/chatInput";
import WatermarkLogo from "../components/watermarkLogo";
import {
  getTextToSpeechUri, speechToText,
  textToAssistant
} from "../utils/server/watson.utils";


const ChatBotScreen = ({ navigation }) => {
  // navigation - once here, if back pressed user should pop nav stack fully (bypass tutorial)
  React.useLayoutEffect(() => {
    navigation.setOptions({
      headerLeft: (props) => (
        <HeaderBackButton {...props} onPress={() => navigation.popToTop()} />
      ),
    });
  });
  // hardware back button pressed - popToTop - override Android default
  useFocusEffect(
    React.useCallback(() => {
      const onBackPress = () => {
        navigation.popToTop();
        return true;
      };
      BackHandler.addEventListener("hardwareBackPress", onBackPress);
      return () =>
        BackHandler.removeEventListener("hardwareBackPress", onBackPress);
    }, [])
  );

  // State
  const [recording, setRecording] = React.useState();
  const [chatHistory, setChatHistory] = React.useState([]);
  const [playLoading, setPlayLoading] = React.useState(false);

  // Watson assistant session state tracking - initially empty string
  const [watsonSessionId, setWatsonSessionId] = React.useState("");

  async function startRecording() {
    try {
      // await Audio.requestPermissionsAsync();
      await Audio.setAudioModeAsync({
        allowsRecordingIOS: true,
        playsInSilentModeIOS: true,
      });
      console.log("Starting recording..");
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
      console.log("Recording started");
    } catch (err) {
      console.error("Failed to start recording", err);
    }
  }

  async function stopRecording(speech = true) {
    console.log("Stopping recording..");
    setPlayLoading(true);
    setRecording(undefined);
    await recording.stopAndUnloadAsync();
    const uri = recording.getURI();
    console.log("Recording stopped and stored at", uri);
    // Send recording to watson, trigger STT

    const sentText = await speechToText(uri);
    // console.log(sentText);
    // TODO - change into handler to handle if results[0] - empty array
    setChatHistory([
      ...chatHistory,
      {
        // id: (chatHistory.length + 1).toString(),
        sent: 1,
        text: sentText.results[0].alternatives[0].transcript,
        // confidence:
      },
    ]);

    // send text to assistant and handle Watson response, update chat history
    const watsonResult = await textToAssistant(
      sentText.results[0].alternatives[0].transcript,
      watsonSessionId,
      speech
    );

    const chatResponse = watsonTextResponseHandler(watsonResult);

    setChatHistory((prevState) => {
      return [...prevState, ...chatResponse];
    });

    setPlayLoading(false);

    // console.log(WatsonResult);
    // console.log("SESION ID = ", watsonSessionId);

    // some check for return values, errors?
    // check if session needs updating
    // for each itme in array, get value for text and add to new chat object
    function watsonTextResponseHandler(res) {
      // console.log("res = ", res);
      // console.log("RES OUT GEN = ", res.output.generic[0].text);
      let watsonReply = [];
      for (let i = 0; i < res.output.generic.length; i++) {
        watsonReply.push({
          // id: (chatHistory.length + 1 + i).toString(),
          sent: 0,
          text: res.output.generic[i].text,
        });
      }
      // console.log("WATSON REPLY =", watsonReply);
      return watsonReply;
    }

    if (watsonResult.output.session_id != watsonSessionId) {
      setWatsonSessionId(watsonResult.session_id);
    }

    //  Play sound
    // get audio array uris
    const audio = watsonResult.speech_urls.map((uri) =>
      getTextToSpeechUri(uri)
    );

    const playSpeech = async (audioUriArray) => {
      for (let i = 0; i < audioUriArray.length; i++) {
        // handle no Watson speech response
        if (audioUriArray[i] != null) {
          playSound(audioUriArray[i]);
        } else {
          console.log("No audio returned from Watson Text to Speech.");
        }
      }
    };

    playSpeech(audio);
  }

  const [sound, setSound] = React.useState();

  async function playSound(uri, playbackUpdate = null) {
    console.log("Loading Sound");
    const { sound } = await Audio.Sound.createAsync({
      uri: uri,
    });
    setSound(sound);

    console.log("Playing Sound");
    await sound.playAsync();
  }

  React.useEffect(() => {
    return sound
      ? () => {
          console.log("Unloading Sound");
          sound.unloadAsync();
        }
      : undefined;
  }, [sound]);

  // TODO - ON component mount should initialise session with Watson!

  return (
    <View style={styles.container}>
      <ChatListView chatArray={chatHistory} />
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

export default ChatBotScreen;
