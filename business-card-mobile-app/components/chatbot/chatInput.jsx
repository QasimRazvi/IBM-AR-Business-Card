import React, { useState } from "react";
import {
  StyleSheet,
  Text,
  View,
  Button,
  TextInput,
  TouchableOpacity,
} from "react-native";
import { Ionicons } from '@expo/vector-icons';

// const chatTextInput = props => {
//     return (
//         <View style={}>

//         </View>
//     )
// }

const ChatMicInput = (props) => {
  const recording = props.recording;
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
