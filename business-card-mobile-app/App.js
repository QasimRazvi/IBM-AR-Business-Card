import { StatusBar } from "expo-status-bar";
import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";

export default function App() {
  const [initText, setInitText] = useState("Welcome to the Business Card app!");
  return (
    <View style={styles.container}>
      <Text>{initText}</Text>
      <StatusBar style="auto" />
      <Button
        title="Change text"
        onPress={() =>
          setInitText(
            "The ultimate AR AI business card experience... Welcome to the future of business cards."
          )
        }
      />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
