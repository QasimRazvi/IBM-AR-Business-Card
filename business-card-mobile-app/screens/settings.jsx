import React, { useState, useEffect } from "react";
import { View, StyleSheet, Text, Switch } from "react-native";
import DefaultPreference from "react-native-default-preference";

const SettingsScreen = () => {
  const [tutorialEnabled, setTutorialEnabled] = useState(true);

  useEffect(() => {
    //   need processing since we are storing key, value as strings
    DefaultPreference.get("tutorial").then((enabled) => {
      //   console.log("enabled = ", enabled);
      if (enabled == "true") {
        setTutorialEnabled(true);
      } else if (enabled == "false") {
        setTutorialEnabled(false);
      } else {
        setTutorialEnabled(true);
      }
    });
    // console.log("effect run");
  }, []);

  const toggleSwitch = () => {
    setTutorialEnabled(!tutorialEnabled),
      DefaultPreference.set("tutorial", (!tutorialEnabled).toString());
  };

  return (
    <View style={styles.container}>
      <View style={styles.settingRow}>
        <Text style={styles.optionText}>
          Tutorials {tutorialEnabled ? "(on)" : "(off)"}
        </Text>
        <Switch
          onValueChange={toggleSwitch}
          value={tutorialEnabled}
          trackColor={{ false: "white", true: "#0043CE" }}
          thumbColor={tutorialEnabled ? "white" : "white"}
        />
      </View>
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    backgroundColor: "black",
    flex: 1,
  },
  optionText: {
    color: "white",
    fontSize: 20,
  },
  settingRow: {
    flexDirection: "row",
    justifyContent: "space-between",
    padding: 5,
    marginTop: 5,
  },
});

export default SettingsScreen;
