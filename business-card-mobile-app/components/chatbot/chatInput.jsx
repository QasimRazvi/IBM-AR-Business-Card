import React, { useState, useEffect } from "react";
import {
  StyleSheet,
  Text,
  View,
  Button,
  TextInput,
  TouchableOpacity,
} from "react-native";
import { Ionicons } from "@expo/vector-icons";
import { Audio } from "expo-av";

const ChatMicInput = (props) => {
  const recording = props.recording;
  const [recordPermission, setRecordPermission] = useState(null);

  // Request audio permission on component mount
  useEffect(() => {
    (async () => {
      console.log("Requesting permissions..");
      const { status } = await Audio.requestPermissionsAsync();
      setRecordPermission(status == "granted");
    })();
  }, []);

  // Display message if permissions not granted
  if (recordPermission == false) {
    return (
      <View style={styles.mic}>
        <Text>
          Audio/Recording permissions are needed to be able to interact with the
          chatbot. Please enable these in your settings.
        </Text>
      </View>
    );
  }

  return (
    <View style={styles.mic}>
      <Button
        onPress={props.onPress}
        title={recording ? "STOP RECORDING" : "RECORD"}
      />
    </View>
  );
};

const styles = StyleSheet.create({
  mic: {
    justifyContent: "center",
    padding: 15,
    alignSelf: "center",
  },
  button: { alignItems: "center", backgroundColor: "#DDDDDD", padding: 10 },
});

export default ChatMicInput;
