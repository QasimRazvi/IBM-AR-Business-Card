import "react-native-gesture-handler";
import { StatusBar } from "expo-status-bar";
import React, { useState } from "react";
import { StyleSheet, Text, View, Button } from "react-native";

// Navigation
import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";

// Screens
import HomeScreen from "./screens/homescreen";
import ChatBotScreen from "./screens/chatbot";

const Stack = createStackNavigator();

export default function App() {
  const [initText, setInitText] = useState("Welcome to the Business Card app!");
  return (
    // <View style={styles.container}>
    //   <Text>{initText}</Text>
    //   <StatusBar style="auto" />
    //   <Button
    //     title="Change text"
    //     onPress={() =>
    //       setInitText(
    //         "The ultimate AR AI business card experience... Welcome to the future of business cards."
    //       )
    //     }
    //   />
    // </View>
    <NavigationContainer>
      <Stack.Navigator initialRouteName="Home">
        <Stack.Screen
          name="Home"
          component={HomeScreen}
          options={{
            title: "ULTIMATE AR BUSINESS CARD",
          }}
        />
        <Stack.Screen
          name="Chatbot"
          component={ChatBotScreen}
          options={{
            title: "Chatbot",
          }}
        />
        <Stack.Screen
          name="Screen2"
          component={Screen2}
          options={{ title: "WELCOME TO SCREEN2!" }}
        />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

// const HomeScreen = ({ navigation }) => {
//   return (
//     <View style={styles.container}>
//       <Button
//         title="PUSH THIS BUTTON"
//         onPress={() =>
//           navigation.navigate("Screen2", {
//             mainText: "THIS IS SCREEN 2 WOOOOO!!!",
//           })
//         }
//       />
//       <Text style={{ color: "#fff" }}>
//         Notice that the status bar has light text!
//       </Text>
//       <StatusBar style="light" />
//     </View>
//   );
// };

const Screen2 = ({ navigation, route }) => {
  return (
    <View style={styles.container}>
      <Button
        title="SCREEN 2"
        onPress={() =>
          navigation.navigate("Home", {
            mainText: "THIS IS HOME WOOOOO!!!",
          })
        }
      />
      <Text style={{ color: "#fff" }}>
        Notice that the status bar has light text!
      </Text>
      <StatusBar style="light" />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
