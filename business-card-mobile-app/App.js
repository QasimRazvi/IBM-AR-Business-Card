import "react-native-gesture-handler";
import React from "react";

// Navigation
import { NavigationContainer } from "@react-navigation/native";
import {
  createStackNavigator,
  HeaderBackButton,
} from "@react-navigation/stack";

// Screens
import HomeScreen from "./screens/homescreen";
import ChatBotScreen from "./screens/chatbot";
import ARUnityScreen from "./screens/augmented-reality";
import TutorialScreen from "./screens/tutorial";

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
            // title: "AR Business Card"
            headerShown: false,
          }}
        />
        <Stack.Screen name="Tutorial" component={TutorialScreen} />
      </Stack.Navigator>
    </NavigationContainer>
  );
}
