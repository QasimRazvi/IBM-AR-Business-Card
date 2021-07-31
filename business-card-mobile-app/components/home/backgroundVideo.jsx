import React from "react";
import { Image, StyleSheet } from "react-native";
import Video from "react-native-video";

const BackgroundVideo = (props) => {
  return (
    <Video
      source={props.videoSource}
      repeat={true}
      resizeMode={"cover"}
      style={styles.video}
    />
  );
};

const styles = StyleSheet.create({
  video: {
    position: "absolute",
    top: 0,
    bottom: 0,
    left: 0,
    right: 0,
  },
});

export default BackgroundVideo;
