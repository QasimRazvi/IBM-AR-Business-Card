import React from "react";
import { Ionicons } from "@expo/vector-icons";
import { StyleSheet, View, TouchableOpacity } from "react-native";

const SettingsIcon = (props) => {
  return (
    <View
      style={{ bottom: "5%", right: "5%", position: "absolute", opacity: 0.6 }}
    >
      <TouchableOpacity onPress={props.onPress}>
        <Ionicons name="md-settings-outline" size={33} color={props.color} />
      </TouchableOpacity>
    </View>
  );
};

export default SettingsIcon;
