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
        <Text style={styles.messageTextDetails}>You</Text>
      </View>
    );
  } else {
    return (
      <View style={styles.bubbleReceived}>
        <Text style={styles.messageTextReceived}>{props.text}</Text>
        <Text style={styles.messageTextDetails}>Watson</Text>
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
      renderItem={({ item }) => (
        <ChatBubble sent={item.sent} text={item.text} />
      )}
      keyExtractor={(item, index) => index.toString()}
    ></FlatList>
  );
};

export default ChatListView;

const styles = StyleSheet.create({
  bubbleSent: {
    backgroundColor: "#0078fb",
    alignSelf: "flex-end",
    borderRadius: 7,
    marginRight: "3%",
    marginLeft: "15%",
    marginTop: 5,
    marginBottom: 3,
    padding: 8,
    shadowColor: "#000",
    shadowOffset: {
      width: 0,
      height: 6,
    },
    shadowOpacity: 0.39,
    shadowRadius: 8.3,

    elevation: 13,
  },
  bubbleReceived: {
    backgroundColor: "#dedede",
    alignSelf: "flex-start",
    borderRadius: 3,
    marginLeft: "3%",
    marginRight: "15%",
    marginTop: 5,
    marginBottom: 3,
    padding: 8,
    shadowColor: "#000",
    shadowOffset: {
      width: 0,
      height: 6,
    },
    shadowOpacity: 0.39,
    shadowRadius: 8.3,

    elevation: 13,
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
  messageTextDetails: {
    fontSize: 8,
    color: "white",
    alignSelf: "flex-end",
    marginRight: "2%",
  },
});
