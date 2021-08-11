import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { render } from "@testing-library/react-native";
import * as React from "react";
import HomeScreen from "../../screens/homescreen";
import renderer from "react-test-renderer";
import DefaultPreference from "react-native-default-preference";

// Silence the warning https://github.com/facebook/react-native/issues/11094#issuecomment-263240420
// Use with React Native <= 0.63
jest.mock("react-native/Libraries/Animated/src/NativeAnimatedHelper");

// import { AntDesign } from "@expo/vector-icons";
// // Use this instead with React Native >= 0.64
// jest.mock("react-native/Libraries/Animated/NativeAnimatedHelper");
jest.mock("react-native-video", () => "Video");
jest.mock("react-native-default-preference", () =>
  jest.fn(() => {}).mockReturnValueOnce(true)
);

// jest.mock("../../components/home/backgroundVideo", () => "BackgroundVideo");
// jest.mock("../../components/home/backgroundVideo", () => {
//   const mockComponent = require("react-native/jest/mockComponent");
//   return mockComponent("../../components/home/backgroundVideo");
// });
// jest.mock("../../components/home/backgroundVideo", () =>
//   jest.genMockFromModule("../../components/home/backgroundVideo")
// );

const Stack = createStackNavigator();

describe("Testing react navigation from home", () => {
  test("page renders ", async () => {
    const component = (
      <NavigationContainer>
        <Stack.Navigator initialRouteName="Home">
          <Stack.Screen name="Home" component={HomeScreen} />
        </Stack.Navigator>
        {/* <HomeScreen /> */}
      </NavigationContainer>
    );

    // const { findByText } = render(component);

    // const navOptionButton1 = await findByText("Chatbot");
    // // const navOptionButton2 = await findByText("AR Experience");

    const tree = renderer.create(component).toJSON();
    expect(tree).toMatchSnapshot();
    // expect(navOptionButton1).toBeTruthy();
    // expect(navOptionButton2).toBeTruthy();
    // expect(items.length).toBe(10);
  });

  //   test("clicking on one item takes you to the details screen", async () => {
  //     const component = (
  //       <NavigationContainer>
  //         <AppNavigator />
  //       </NavigationContainer>
  //     );

  //     const { findByText } = render(component);
  //     const toClick = await findByText("Item number 5");

  //     fireEvent(toClick, "press");
  //     const newHeader = await findByText("Showing details for 5");
  //     const newBody = await findByText("the number you have chosen is 5");

  //     expect(newHeader).toBeTruthy();
  //     expect(newBody).toBeTruthy();
  //   });
});

// describe("Screen 1", () => {
//   it("navigates on button press", () => {
//     const push = jest.fn();
//     const { getByText } = render(<HomeScreen navigation={{ push }} />);
//     fireEvent.press(getByText("Chatbot"));
//     expect(push).toHaveBeenCalledWith("Screen2");
//   });
// });
