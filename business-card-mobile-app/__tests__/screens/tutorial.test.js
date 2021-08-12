import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { fireEvent, render, act } from "@testing-library/react-native";
import * as React from "react";
import renderer from "react-test-renderer";
import ARUnityScreen from "../../screens/augmented-reality";
import ChatBotScreen from "../../screens/chatbot";
import TutorialScreen from "../../screens/tutorial";

const Stack = createStackNavigator();

describe("Tutorial", () => {
  test("AR tutorial renders with Skip option + nav to AR working", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Tutorial">
          <Stack.Screen
            name="Tutorial"
            component={TutorialScreen}
            initialParams={{ target: "ar" }}
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
        </Stack.Navigator>
      </NavigationContainer>
    );

    const { findByText } = render(component);
    const initText = await findByText(
      "Flip over the business card to find the IBM AR logo."
    );

    const navOptionButton1 = await findByText("Skip");
    expect(navOptionButton1).toBeTruthy();
    expect(initText).toBeTruthy();

    act(() => {
      fireEvent(navOptionButton1, "press");
    });
    const newHeader = await findByText("AR Experience");
    expect(newHeader).toBeTruthy();
  });

  test("Chatbot tutorial renders with Skip option _ nav to Chatbot working", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Tutorial">
          <Stack.Screen
            name="Tutorial"
            component={TutorialScreen}
            initialParams={{ target: "chatbot" }}
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
        </Stack.Navigator>
      </NavigationContainer>
    );

    const { findByText } = render(component);
    const initText = await findByText(
      "Press the microphone to start recording a message."
    );

    const navOptionButton1 = await findByText("Skip");
    expect(navOptionButton1).toBeTruthy();
    expect(initText).toBeTruthy();

    act(() => {
      fireEvent(navOptionButton1, "press");
    });
    const newHeader = await findByText("Chatbot");
    expect(newHeader).toBeTruthy();
  });

  //   SNAPSHOT TESTS
  test("AR tutorial renders correctly", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Tutorial">
          <Stack.Screen
            name="Tutorial"
            component={TutorialScreen}
            initialParams={{ target: "ar" }}
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
        </Stack.Navigator>
      </NavigationContainer>
    );

    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
  });

  test("Chatbot tutorial renders correctly", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Tutorial">
          <Stack.Screen
            name="Tutorial"
            component={TutorialScreen}
            initialParams={{ target: "chatbot" }}
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
        </Stack.Navigator>
      </NavigationContainer>
    );
    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
