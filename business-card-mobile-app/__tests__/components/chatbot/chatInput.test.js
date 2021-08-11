import React from "react";
import renderer from "react-test-renderer";
import ChatMicInput from "../../../components/chatbot/chatInput";

describe("<ChatMicInput recording={false}/>", () => {
  it("renders correctly", () => {
    const tree = renderer.create(<ChatMicInput recording={false} />).toJSON();
    expect(tree).toMatchSnapshot();
  });
});

describe("<ChatMicInput recording={true}/>", () => {
  it("renders correctly", () => {
    const tree = renderer.create(<ChatMicInput recording={true} />).toJSON();
    expect(tree).toMatchSnapshot();
  });
});

describe("<ChatMicInput loading={true}/>", () => {
  it("renders correctly", () => {
    const tree = renderer.create(<ChatMicInput loading={true} />).toJSON();
    expect(tree).toMatchSnapshot();
  });
});
