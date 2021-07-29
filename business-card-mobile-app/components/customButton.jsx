// Custom IBM Blue styled button

import React from "react";
import { StyleSheet, TouchableOpacity, Text, View } from "react-native";

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

const styles = StyleSheet.create({
  buttonContainer: {
    backgroundColor: "#0043CE", // IBM blue 70%
    borderWidth: 3,
    borderRadius: 20,
    padding:10,
    width:"45%"
  },
  buttonText: {
    color: "white",
    fontSize: 16,
    alignSelf: "center",
  },
});

export default CustomButton;
