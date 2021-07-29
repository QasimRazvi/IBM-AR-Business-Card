import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";
import CustomButton from "../components/customButton";
import WatermarkLogo from "../components/watermarkLogo";

const HomeScreen = ({ navigation }) => {
  return (
    <View style={styles.container}>
      <Text style={{ padding: 20, color: "white", fontSize: 20 }}>
        Choose your experience
      </Text>
      <View style={styles.buttonContainer}>
        <CustomButton
          title="Chatbot"
          onPress={() => navigation.navigate("Chatbot")}
        />
        <CustomButton
          title="AR Experience"
          onPress={() => navigation.navigate("ARUnity", {})}
        />
      </View>
      <StatusBar style="dark" />
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
