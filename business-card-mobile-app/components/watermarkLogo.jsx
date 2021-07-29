// APP AR Business Card logo watermark
import React from "react";
import { StyleSheet, TouchableOpacity, Text, View, Image } from "react-native";

const WatermarkLogo = () => {
  return (
    <Image
      style={styles.watermark}
      source={require("../assets/app-icon-ibm-transparent-alpha-background.png")}
    />
  );
};

const styles = StyleSheet.create({
  // Placement bottom right corner of screen
  watermark: {
    position: "absolute",
    width: 100,
    height: 100,
    zIndex: 10,
    bottom: 5,
    right: 15,
  },
});

export default WatermarkLogo;
