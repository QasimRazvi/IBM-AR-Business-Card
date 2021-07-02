import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";
// import Chat from "../components/chatbot/chat";
import ChatMicInput from "../components/chatbot/chatInput";
import { Audio } from "expo-av";

import { speechToText } from "../utils/server/watson.utils";

const ChatBotScreen = ({ navigation }) => {
  //   const [recording, setRecording] = useState(false);
  const [recording, setRecording] = React.useState();
  //   const startRecording = () => {
  //     toggleRecord();
  //   };
  //   const stopRecording = () => {
  //     toggleRecord();
  //     console.log("RECORDING STOPPED!!");
  //   };

  async function startRecording() {
    try {
      console.log("Requesting permissions..");
      await Audio.requestPermissionsAsync();
      await Audio.setAudioModeAsync({
        allowsRecordingIOS: true,
        playsInSilentModeIOS: true,
      });
      console.log("Starting recording..");
      const recording = new Audio.Recording();
      await recording.prepareToRecordAsync(
        // need to configure custom formats as android default m4a not compatible with watson API
        {
          android: {
            extension: ".m4a",
            outputFormat: Audio.RECORDING_OPTION_ANDROID_OUTPUT_FORMAT_MPEG_4,
            audioEncoder: Audio.RECORDING_OPTION_ANDROID_AUDIO_ENCODER_AAC,
            sampleRate: 44100,
            numberOfChannels: 2,
            bitRate: 128000,
          },
          ios: {
            extension: ".m4a",
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

  async function stopRecording() {
    console.log("Stopping recording..");
    console.log(recording);
    setRecording(undefined);
    await recording.stopAndUnloadAsync();
    const uri = recording.getURI();
    console.log("Recording stopped and stored at", uri);
    // TODO - send recording to watson, trigger STT
    playSound(uri);
    speechToText(uri);
  }

  const [sound, setSound] = React.useState();

  async function playSound(uri) {
    console.log("Loading Sound");
    const { sound } = await Audio.Sound.createAsync({ uri: uri });
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

  return (
    <View style={styles.micView}>
      <ChatMicInput
        onPress={!recording ? startRecording : stopRecording}
        recording={recording}
      />
      {/* <Chat /> */}
    </View>
  );
};

const styles = StyleSheet.create({
  micView: {
    position: "absolute",
    bottom: 20,
    left: 10,
    right: 10,
  },
});

export default ChatBotScreen;
