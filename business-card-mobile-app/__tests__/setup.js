// Source: https://reactnavigation.org/docs/testing/
// to mock navigation components for testing
// import "react-native-gesture-handler/jestSetup";

require("stacktrace-parser");

jest.mock("react-native-reanimated", () => {
  const Reanimated = require("react-native-reanimated/mock");

  // The mock for `call` immediately calls the callback which is incorrect
  // So we override it with a no-op
  Reanimated.default.call = () => {};

  return Reanimated;
});

// Silence the warning: Animated: `useNativeDriver` is not supported because the native animated module is missing
jest.mock("react-native/Libraries/Animated/src/NativeAnimatedHelper");

// As of react-native@0.64.X file has moved
// jest.mock("react-native/Libraries/Animated/NativeAnimatedHelper");

// jest.mock("@react-navigation/native", () => {
//   const actualNav = jest.requireActual("@react-navigation/native");
//   return {
//     ...actualNav,
//     useNavigation: () => ({
//       navigate: jest.fn(),
//       dispatch: jest.fn(),
//     }),
//   };
// });
