import { StatusBar } from "expo-status-bar";
import React, { useState, useEffect } from "react";
import { StyleSheet, Text, View } from "react-native";
import CustomButton from "../components/customButton";
import BackgroundVideo from "../components/home/backgroundVideo";
import SettingsIcon from "../components/settingsIcon";
import WatermarkLogo from "../components/watermarkLogo";
import DefaultPreference from "react-native-default-preference";
import { useFocusEffect } from "@react-navigation/native";

const HomeScreen = ({ navigation }) => {
  // tutorial state (if enabled, triggered on click for chatbot or AR)
  const [tutorialOn, setTutorialOn] = React.useState(true);

  // re-retrieve settings on Focus (in case settings have just been updated)
  useFocusEffect(() => {
    //   need processing on string
    DefaultPreference.get("tutorial").then((enabled) => {
      if (enabled == "true") {
        setTutorialOn(true);
      } else if (enabled == "false") {
        setTutorialOn(false);
      } else {
        // if null or undefined - default should be true
        setTutorialOn(true);
      }
    });
  });

  return (
    <View style={styles.container}>
      <BackgroundVideo
        videoSource={require("../assets/background-video-vectors.mp4")}
      />
      <Text style={{ padding: 20, color: "white", fontSize: 20 }}>
        Choose your experience
      </Text>
      <View style={styles.buttonContainer}>
        <CustomButton
          title="Chatbot"
          onPress={
            tutorialOn
              ? () => navigation.navigate("Tutorial", { target: "chatbot" })
              : () => navigation.navigate("Chatbot")
          }
        />
        <CustomButton
          title="AR Experience"
          onPress={
            tutorialOn
              ? () => navigation.navigate("Tutorial", { target: "ar" })
              : () => navigation.navigate("ARUnity")
          }
        />
      </View>
      <StatusBar style="light" />
      <WatermarkLogo />
      <SettingsIcon
        onPress={() => navigation.navigate("Settings")}
        color={"white"}
      />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#000000",
    alignItems: "center",
    justifyContent: "center",
  },
  buttonContainer: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "95%",
    padding: 20,
  },
});

export default HomeScreen;
