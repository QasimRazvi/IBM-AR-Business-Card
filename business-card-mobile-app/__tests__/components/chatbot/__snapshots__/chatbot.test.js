import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { fireEvent, render, act } from "@testing-library/react-native";
import * as React from "react";
import renderer from "react-test-renderer";
import ChatBot from "../../../../components/chatbot/chatbot";

// jest.mock("expo-av", () => {
//   return {
//     get: jest.fn().mockImplementation(() => Promise.resolve(true)),
//   };
// });

const Stack = createStackNavigator();

describe("<Chatbot (component) />", () => {
  //   SNAPSHOT
  test("renders correctly", async () => {
    const component = <ChatBot />;

    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
