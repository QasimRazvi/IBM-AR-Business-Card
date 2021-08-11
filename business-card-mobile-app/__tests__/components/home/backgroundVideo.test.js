import React from "react";
import renderer from "react-test-renderer";
import BackgroundVideo from "../../../components/home/backgroundVideo";
jest.mock("react-native-video", () => "Video");

describe("<BackgroundVideo />", () => {
  it("renders correctly", () => {
    const video = require("../../../assets/background-video-vectors.mp4");
    const tree = renderer.create(<BackgroundVideo />).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
