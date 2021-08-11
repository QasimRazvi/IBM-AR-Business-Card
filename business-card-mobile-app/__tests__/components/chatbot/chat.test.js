import React from "react";
import renderer from "react-test-renderer";
import ChatListView from "../../../components/chatbot/chat";

// Chathistory mock
const mockData = [
  { sent: 0, text: "Hi my name is John" },
  { sent: 1, text: "What can you do?" },
  { sent: 0, text: "Ask me about my education or top skills" },
  { sent: 1, text: "When did you graduate?" },
];

describe("<ChatListView />", () => {
  it("renders correctly", () => {
    const tree = renderer
      .create(<ChatListView chatArray={mockData} />)
      .toJSON();
    expect(tree).toMatchSnapshot();
  });
});

describe("<ChatListView ar={true}/>", () => {
  it("renders correctly", () => {
    const tree = renderer
      .create(<ChatListView chatArray={mockData} ar={true} />)
      .toJSON();
    expect(tree).toMatchSnapshot();
  });
});
