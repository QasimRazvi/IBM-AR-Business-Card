import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { fireEvent, render, act } from "@testing-library/react-native";
import * as React from "react";
import App from "../../App";
import HomeScreen from "../../screens/homescreen";

// Mocking third party native libraries
jest.mock("react-native/Libraries/Animated/src/NativeAnimatedHelper");
jest.mock("react-native-video", () => "Video");
jest.mock("react-native-default-preference", () => {
  return {
    get: jest.fn().mockImplementation(
      () =>
        new Promise((resolve, reject) => {
          "true";
          resolve();
        })
    ),

    // jest.fn(() => {}).mockReturnValueOnce("true"),
  };
});

const Stack = createStackNavigator();

describe("Testing react navigation from home", () => {
  test("page renders nav options ", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Home">
          <Stack.Screen name="Home" component={HomeScreen} />
        </Stack.Navigator>
      </NavigationContainer>
    );

    const { findByText } = render(component);

    const navOptionButton1 = await findByText("Chatbot");
    const navOptionButton2 = await findByText("AR Experience");
    expect(navOptionButton1).toBeTruthy();
    expect(navOptionButton2).toBeTruthy();
  });

  test("Chatbot navigation successful", async () => {
    const component = <App />;

    const { findByText } = render(component);
    const toClick = await findByText("Chatbot");

    act(() => {
      fireEvent(toClick, "press");
    });
    const newHeader = await findByText("Chatbot");

    expect(newHeader).toBeTruthy();
  });

  test("AR Experience navigation successful", async () => {
    const component = <App />;

    const { findByText } = render(component);
    const toClick = await findByText("AR Experience");

    act(() => {
      fireEvent(toClick, "press");
    });
    const newHeader = await findByText("AR Experience");

    expect(newHeader).toBeTruthy();
  });

  test("Settings navigation successful", async () => {
    const component = <App />;

    const { getByTestId, findByText } = render(component);
    const toClick = getByTestId("settings-icon");

    act(() => {
      fireEvent(toClick, "press");
    });
    const newHeader = await findByText("Settings");

    expect(newHeader).toBeTruthy();
  });
});
