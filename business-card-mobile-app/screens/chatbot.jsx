import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";
import Chat from "../components/chatbot/chat";

const ChatBotScreen = ({ navigation }) => {
  return (
    <View>
      <Chat />
    </View>
  );
};

export default ChatBotScreen;
