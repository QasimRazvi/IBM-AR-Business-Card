import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { render } from "@testing-library/react-native";
import * as React from "react";
import renderer from "react-test-renderer";
import SettingsScreen from "../../screens/settings";

// Mocking third party native libraries
jest.mock("react-native-default-preference", () => {
  return {
    get: jest.fn().mockImplementation(() => Promise.resolve(true)),
  };
});

const Stack = createStackNavigator();

describe("<SettingsScreen />", () => {
  test("renders with tutorial settings ", async () => {
    const component = <SettingsScreen />;

    const { queryByText } = render(component);

    const tutorialPrefOn = queryByText("Tutorials (on)");
    const tutorialPrefOff = queryByText("Tutorials (off)");
    expect(tutorialPrefOn || tutorialPrefOff).toBeTruthy();
  });

  test("renders correctly", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Settings">
          <Stack.Screen name="Settings" component={SettingsScreen} />
        </Stack.Navigator>
      </NavigationContainer>
    );

    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
