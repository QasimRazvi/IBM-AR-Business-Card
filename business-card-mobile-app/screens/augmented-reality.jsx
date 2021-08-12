import UnityView from "@asmadsen/react-native-unity-view";
import MaskedView from "@react-native-community/masked-view";
import { useFocusEffect } from "@react-navigation/native";
import { HeaderBackButton } from "@react-navigation/stack";
import { Camera } from "expo-camera";
import { LinearGradient } from "expo-linear-gradient";
import { StatusBar } from "expo-status-bar";
import React, { useEffect, useState } from "react";
import {
  ActivityIndicator,
  BackHandler,
  StyleSheet,
  Text,
  View,
} from "react-native";
import ChatBot from "../components/chatbot/chatbot";
import WatermarkLogo from "../components/watermarkLogo";
import { updateUnityAnimationState } from "../utils/unity/unity.utils";

const ARUnityScreen = ({ navigation }) => {
  // navigation - once here, if back pressed user should pop nav stack fully (bypass tutorial if enabled)
  React.useLayoutEffect(() => {
    navigation.setOptions({
      headerLeft: (props) => (
        <HeaderBackButton
          {...props}
          onPress={() => navigation.navigate("Home")}
        />
      ),
    });
  });

  // hardware back button pressed - popToTop - override Android default
  // No software na back button as this coomponent renders full screen
  useFocusEffect(
    React.useCallback(() => {
      const onBackPress = () => {
        navigation.navigate("Home");
        return true;
      };
      BackHandler.addEventListener("hardwareBackPress", onBackPress);
      return () =>
        BackHandler.removeEventListener("hardwareBackPress", onBackPress);
    }, [])
  );

  // State
  const [camPermission, setCamPermission] = useState(null);

  // On component mount ensure camera permission are allowed
  useEffect(() => {
    (async () => {
      const { status } = await Camera.requestPermissionsAsync();
      setCamPermission(status === "granted");
    })();
  }, []);

  if (camPermission == null) {
    return (
      <View style={styles.loading}>
        {/* // Loading animation */}
        <ActivityIndicator size="large" color="#001d6c" />
      </View>
    );
  }
  if (camPermission == false) {
    return (
      <View
        style={{
          flex: 1,
          backgroundColor: "black",
          padding: 20,
          paddingTop: "40%",
          alignContent: "center",
          alignItems: "center",
        }}
      >
        <Text style={{ color: "white" }}>
          Camera permissions not granted. Please enable this app to use the
          camera in your settings to access the Augmented Reality Experience.{" "}
        </Text>
      </View>
    );
  }

  // Update state to correct value based on chatbot state
  // Any states that need to be triggered based on a phrase returned by Watson should be defined in phraseTriggers.js
  const onRecording = () => {
    updateUnityAnimationState("idle");
    // console.log("Idle");
  };
  const onSpeechProcessing = () => {
    updateUnityAnimationState("thinking");
    // console.log("thinking");
  };
  const onFinishResponse = () => {
    updateUnityAnimationState("idle");
    // console.log("Idle");
  };
  const onResponse = () => {
    updateUnityAnimationState("talking");
    // console.log("talking");
  };

  // If permissions granted return experience
  return (
    <View style={styles.container}>
      <StatusBar hidden />
      <UnityView
        style={{ position: "absolute", left: 0, right: 0, top: 0, bottom: 0 }}
      />
      <View
        style={{
          height: "50%",
          marginTop: "auto",
          backgroundColor: "transparent",
        }}
      >
        {/* MaskedView to implement transparency gradient for Chatbot messages 
        (fade out towards top of parent View to aid seeing the AR avatar) */}
        <MaskedView
          style={StyleSheet.absoluteFill}
          maskElement={
            <LinearGradient
              colors={["rgba(0,0,0,0)", "rgba(0,0,0,1)"]}
              style={{ flex: 1 }}
            />
          }
        >
          <ChatBot
            onRecording={onRecording}
            onSpeechProcessing={onSpeechProcessing}
            onResponse={onResponse}
            onFinishResponse={onFinishResponse}
            ar={true}
          />
        </MaskedView>
      </View>
      <WatermarkLogo />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    // backgroundColor: "#fff",
    // alignItems: "center",
    // justifyContent: "center",
  },
  loading: {
    flex: 1,
    flexDirection: "column",
    justifyContent: "center",
  },
});

export default ARUnityScreen;
