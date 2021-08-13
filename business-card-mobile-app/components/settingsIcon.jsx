import React from "react";
import { Ionicons } from "@expo/vector-icons";
import { StyleSheet, View, TouchableOpacity } from "react-native";
import PropTypes from "prop-types";

const SettingsIcon = (props) => {
  return (
    <View
      style={{ bottom: "5%", right: "5%", position: "absolute", opacity: 0.6 }}
    >
      <TouchableOpacity onPress={props.onPress} testID="settings-icon">
        <Ionicons name="md-settings-outline" size={33} color={props.color} />
      </TouchableOpacity>
    </View>
  );
};

SettingsIcon.propTypes = {
  onPress: PropTypes.func,
  color: PropTypes.string,
};

export default SettingsIcon;
