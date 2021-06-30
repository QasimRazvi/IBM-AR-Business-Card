import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";

const HomeScreen = ({ navigation }) => {
  return (
    <View style={styles.container}>
        <Text style={{padding:20}}>THIS IS THE HOME SCREEN</Text>
      <Button
        title="CHATBOT"
        onPress={() =>
          navigation.navigate("Chatbot")
        }
      />
      <Button
        title="FULL AR EXPERIENCE"
        // onPress={() =>
        //   navigation.navigate("AR", {
        //   })
        // }
      />
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
});

export default HomeScreen;
