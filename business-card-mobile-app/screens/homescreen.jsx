import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";

const HomeScreen = ({ navigation }) => {
  return (
    <View style={styles.container}>
      <Text style={{ padding: 20 }}>Choose your experience</Text>
      <View style={styles.buttonContainer}>
        <Button
          title="CHATBOT"
          onPress={() => navigation.navigate("Chatbot")}
        />
        <Button
          title="FULL AR EXPERIENCE"
          // onPress={() =>
          //   navigation.navigate("AR", {
          //   })
          // }
        />
      </View>
      <Text style={{ color: "#fff" }}>
        Notice that the status bar has light text!
      </Text>
      <StatusBar style="light" />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
  buttonContainer: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "90%",
    padding: 20,
  },
});

export default HomeScreen;
