// Custom IBM Blue styled button

import React from "react";
import { StyleSheet, Text, TouchableOpacity, View } from "react-native";
import PropTypes from "prop-types";

const CustomButton = (props) => {
  // props.onPress
  // props.title

  return (
    <TouchableOpacity onPress={props.onPress} style={styles.buttonContainer}>
      <View>
        <Text style={styles.buttonText}>{props.title}</Text>
      </View>
    </TouchableOpacity>
  );
};

CustomButton.propTypes = {
  title: PropTypes.string.isRequired,
  onPress: PropTypes.func,
};

const styles = StyleSheet.create({
  buttonContainer: {
    backgroundColor: "#0043CE", // IBM blue 70%
    borderWidth: 2,
    borderRadius: 20,
    padding: 10,
    width: "48%",
  },
  buttonText: {
    color: "white",
    fontSize: 16,
    alignSelf: "center",
  },
});

export default CustomButton;
