import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { act, fireEvent, render } from "@testing-library/react-native";
import * as React from "react";
import renderer from "react-test-renderer";
import ARUnityScreen from "../../screens/augmented-reality";
import HomeScreen from "../../screens/homescreen";

const Stack = createStackNavigator();
describe("<ARUnityScreen />", () => {
  test("renders correctly", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="ARUnity">
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
