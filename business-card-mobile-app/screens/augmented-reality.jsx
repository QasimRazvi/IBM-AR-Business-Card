import React, { useState, useEffect } from "react";
import {
  StyleSheet,
  Text,
  View,
  Button,
  ActivityIndicator,
} from "react-native";
import { StatusBar } from "expo-status-bar";
import { Camera } from "expo-camera";
import { LinearGradient } from "expo-linear-gradient";
import UnityView from "@asmadsen/react-native-unity-view";
// import MaskedView from "@react-native-masked-view/masked-view";
// import {MaskedView} from '@react-native-masked-view/masked-view';
import MaskedView from "@react-native-community/masked-view";

import ChatBotScreen from "./chatbot";

const ARUnityScreen = ({ navigation }) => {
  const [camPermission, setCamPermission] = useState(null);

  // On component mount ensure camera permission are allowed
  useEffect(() => {
    (async () => {
      const { status } = await Camera.requestPermissionsAsync();
      setCamPermission(status === "granted");
    })();
  }, []);

  if (camPermission == null) {
    return (
      <View style={styles.loading}>
        {/* // Loading animation */}
        <ActivityIndicator size="large" color="#001d6c" />
      </View>
    );
  }
  if (camPermission == false) {
    return (
      <View>
        <Text>
          Camera permissions not granted. Please enable this app to use the
          camera in your settings to access the Augmented Reality Experience.{" "}
        </Text>
      </View>
    );
  }
  // If permissions granted return experience
  return (
    <View style={styles.container}>
      <StatusBar hidden />
      <UnityView
        style={{ position: "absolute", left: 0, right: 0, top: 0, bottom: 0 }}
      />
      <View
        style={{
          height: "45%",
          marginTop: "auto",
          backgroundColor: "transparent",
        }}
      >
        <MaskedView
          style={StyleSheet.absoluteFill}
          maskElement={<LinearGradient colors={['rgba(0,0,0,0)', 'rgba(0,0,0,1)']} style={{ flex: 1 }} />}
        >
          <ChatBotScreen />
        </MaskedView>
        {/* <LinearGradient
          colors={["rgba(0,0,0,0)", "rgba(0,0,0,1)"]}
          style={{ flex: 1 }}
        /> */}
        {/* </LinearGradient> */}
      </View>

      {/* <StatusBar style="dark" /> */}
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    // backgroundColor: "#fff",
    // alignItems: "center",
    // justifyContent: "center",
  },
  loading: {
    flex: 1,
    flexDirection: "column",
    justifyContent: "center",
  },
});

export default ARUnityScreen;
