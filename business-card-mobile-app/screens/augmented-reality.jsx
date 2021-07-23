import React, { useState, useEffect } from "react";
import { StyleSheet, Text, View, Button } from "react-native";
import { StatusBar } from "expo-status-bar";
import { Camera } from "expo-camera";
import UnityView from "@asmadsen/react-native-unity-view";

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
      <Text
        style={{
          textAlign: "center",
          paddingTop: 20,
          padding: 5,
          fontWeight: "bold",
        }}
      >
        Attempting to request Camera permissions.
      </Text>
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
      <Text style={{ padding: 10 }}>Welcome to the AR Experience.</Text>
      {/* <Camera style={{ flex: 1 }} type={Camera.Constants.Type.back}></Camera> */}
      <UnityView
        style={{ position: "absolute", left: 0, right: 0, top: 0, bottom: 0 }}
      />

      <StatusBar style="dark" />
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
});

export default ARUnityScreen;
