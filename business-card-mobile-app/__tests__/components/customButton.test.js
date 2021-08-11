import React from "react";
import renderer from "react-test-renderer";
import CustomButton from "../../components/customButton";

// jest.mock("react-native/Libraries/Animated/src/NativeAnimatedHelper");

describe("<CustomButton />", () => {
  it("renders correctly", () => {
    const tree = renderer.create(<CustomButton title={"Testing"} />).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
