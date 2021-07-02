import React, { useState } from "react";
import { StyleSheet, Text, View, Button, FlatList } from "react-native";

// const Chat = (props) => {
//   return <Text>THIS IS THE CHATBOT</Text>;
// };

// Chat bubble component
// hold text, styling + sent, receieved
const ChatBubble = (props) => {
  console.log(props);
  if (props.sent) {
    return (
      <View style={styles.bubbleSent}>
        <Text style={styles.messageTextSent}>{props.text}</Text>
      </View>
    );
  } else {
    return (
      <View style={styles.bubbleReceived}>
        <Text style={styles.messageTextReceived}>{props.text}</Text>
      </View>
    );
    // received message
  }
};

// List of chat bubbles component
// ScrollView/FlatList  + map logic + order
// Receieve data key value object array {id: , text: }

const ChatListView = (props) => {
  console.log(props);
  return (
    <FlatList
      data={props.chatArray}
      renderItem={({item}) => <ChatBubble sent={item.sent} text={item.text} />}
    ></FlatList>
  );
};

export default ChatListView;

const styles = StyleSheet.create({
  bubbleSent: {
    backgroundColor: "#0078fe",
    alignSelf: "flex-end",
    borderRadius: 3,
    marginRight: "3%",
  },
  bubbleReceived: {
    backgroundColor: "#dedede",
    alignSelf: "flex-start",
    borderRadius: 3,
    marginLeft: "3%",
  },
  messageTextSent: {
    fontSize: 16,
    color: "#fff",
  },
  messageTextReceived: {
    fontSize: 16,
    color: "#000",
    justifyContent: "center",
  },
});
