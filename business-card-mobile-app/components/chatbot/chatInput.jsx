import { FontAwesome5 } from "@expo/vector-icons";
import { Audio } from "expo-av";
import React, { useEffect, useState } from "react";
import {
  ActivityIndicator,
  StyleSheet,
  Text,
  TouchableOpacity,
  View,
} from "react-native";
import PropTypes from "prop-types";

const ChatMicInput = (props) => {
  const recording = props.recording;
  const [recordPermission, setRecordPermission] = useState(null);
  const loading = props.loading;

  // Request audio permission on component mount
  useEffect(() => {
    (async () => {
      // console.log("Requesting permissions..");
      const { status } = await Audio.requestPermissionsAsync();
      setRecordPermission(status == "granted");
    })();
  }, []);

  // Display message if permissions not granted
  if (recordPermission == false) {
    return (
      <View style={styles.mic}>
        <Text style={{ color: "white", padding: "20%" }}>
          Audio/Recording permissions are needed to be able to interact with the
          chatbot. Please enable these in your settings.
        </Text>
      </View>
    );
  }

  if (loading) {
    return (
      <View style={styles.mic}>
        <TouchableOpacity activeOpacity={0.8}>
          <View style={styles.micContainer}>
            <ActivityIndicator size="large" color="black" />
          </View>
        </TouchableOpacity>
      </View>
    );
  }

  return (
    <View style={styles.mic}>
      <TouchableOpacity onPress={props.onPress} testID="mic-button">
        <View style={styles.micContainer}>
          {!recording ? (
            <FontAwesome5 name="microphone" size={33} color="black" />
          ) : (
            <FontAwesome5 name="stop" size={33} color="black" />
          )}
        </View>
      </TouchableOpacity>
    </View>
  );
};

ChatMicInput.propTypes = {
  loading: PropTypes.bool,
  recording: PropTypes.any,
};

const styles = StyleSheet.create({
  mic: {
    justifyContent: "center",
    padding: 3,
    alignSelf: "center",
    // borderWidth: 4,
    // borderRadius: 40,
  },
  button: { alignItems: "center", backgroundColor: "#DDDDDD", padding: 10 },
  micContainer: {
    alignItems: "center",
    backgroundColor: "white",
    padding: 20,
    borderRadius: 50,
  },
});

export default ChatMicInput;
