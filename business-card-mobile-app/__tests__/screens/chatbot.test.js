import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { fireEvent, render, act } from "@testing-library/react-native";
import * as React from "react";
import renderer from "react-test-renderer";
import ChatBotScreen from "../../screens/chatbot";

// jest.mock("expo-av", () => {
//   return {
//     get: jest.fn().mockImplementation(() => Promise.resolve(true)),
//   };
// });

const Stack = createStackNavigator();

describe("<ChatbotScreen />", () => {
  test("page renders with mic", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Chatbot">
          <Stack.Screen name="Chatbot" component={ChatBotScreen} />
        </Stack.Navigator>
      </NavigationContainer>
    );

    const { findByText, getByTestId } = render(component);

    const header = await findByText("Chatbot");
    const mic = getByTestId("mic-button");
    expect(header).toBeTruthy();
    expect(mic).toBeTruthy();
  });

  //  Chat module will need extensive mocking to test native APIs such as audio recording + saving

  //   SNAPSHOT
  test("renders correctly", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Chatbot">
          <Stack.Screen name="Chatbot" component={ChatBotScreen} />
        </Stack.Navigator>
      </NavigationContainer>
    );

    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
