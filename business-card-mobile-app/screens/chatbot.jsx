import { useFocusEffect } from "@react-navigation/native";
import { HeaderBackButton } from "@react-navigation/stack";
import React from "react";
import { BackHandler } from "react-native";
import ChatBot from "../components/chatbot/chatbot";

const ChatBotScreen = ({ navigation }) => {
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
  return <ChatBot />;
};

export default ChatBotScreen;
