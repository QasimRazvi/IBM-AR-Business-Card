import { StatusBar } from "expo-status-bar";
import React from "react";
import { StyleSheet, Text, View } from "react-native";
import CustomButton from "../components/customButton";
import BackgroundVideo from "../components/home/backgroundVideo";
import WatermarkLogo from "../components/watermarkLogo";

const HomeScreen = ({ navigation }) => {
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
          // onPress={() => navigation.navigate("Chatbot")}
          onPress={() => navigation.navigate("Tutorial", { target: "chatbot" })}
        />
        <CustomButton
          title="AR Experience"
          // onPress={() => navigation.navigate("ARUnity", {})}
          onPress={() => navigation.navigate("Tutorial", { target: "ar" })}
        />
      </View>
      <StatusBar style="light" />
      <WatermarkLogo />
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
