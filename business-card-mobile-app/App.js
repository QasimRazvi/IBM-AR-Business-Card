// Navigation
import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import React from "react";
import "react-native-gesture-handler";
import ARUnityScreen from "./screens/augmented-reality";
import ChatBotScreen from "./screens/chatbot";
// Screens
import HomeScreen from "./screens/homescreen";
import TutorialScreen from "./screens/tutorial";
import SettingsScreen from "./screens/settings";

const Stack = createStackNavigator();

export default function App() {
  const headerStyles = {
    headerStyle: {
      backgroundColor: "black",
    },
    headerTintColor: "white",
    headerTitleStyle: {
      fontWeight: "bold",
    },
  };
  return (
    <NavigationContainer>
      <Stack.Navigator
        initialRouteName="Home"
        screenOptions={{
          // configure header accross application (where shown)
          headerStyle: {
            backgroundColor: "black",
          },
          headerTintColor: "white",
          // headerTitleStyle: {
          //   fontWeight: "bold",
          // },
        }}
      >
        <Stack.Screen
          name="Home"
          component={HomeScreen}
          options={{
            title: "IBM - AR AI BUSINESS CARD",
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
          name="ARUnity"
          component={ARUnityScreen}
          options={{
            title: "AR Experience",
            headerShown: true,
          }}
        />
        <Stack.Screen name="Tutorial" component={TutorialScreen} />
        <Stack.Screen name="Settings" component={SettingsScreen} />
      </Stack.Navigator>
    </NavigationContainer>
  );
}
