import React from "react";
import { Image } from "react-native";

export const tutorialData = {
  ar: [
    {
      text: "Flip over the business card to find the IBM AR logo.",
      component: (
        <Image
          source={require("../../assets/bc-back.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "When the experience starts, point the phone at the logo to trigger the 3D avatar.",
      component: (
        <Image
          source={require("../../assets/AR_Experience_with_card_google-pixel5.png")}
          style={{ width: "80%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "Press the microphone to start recording a question.",
      component: (
        <Image
          source={require("../../assets/AR_Experience_mic_zoom.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "When you've finished, hit stop to wait for the AI to process your question and respond. Make sure your volume is on!",
      component: (
        <Image
          source={require("../../assets/AR_Experience_mic_zoom_recording.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "You can find a scrollable transcript of the conversation updated in real-time on the lower half of the screen.\n\nClick 'Continue' to proceed.",
      component: (
        <Image
          source={require("../../assets/AR_chat_cropped.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
  ],
  chatbot: [
    {
      text: "Press the microphone to start recording a message.",
      component: (
        <Image
          source={require("../../assets/chatbot-mic.png")}
          style={{ width: "80%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "When you've finished, hit stop to wait for the AI to process your question and respond. Make sure your volume is on!",
      component: (
        <Image
          source={require("../../assets/chatbot-recording.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
    {
      text: "See the transcript of the your conversation update in real-time on the screen.\n\nClick 'Continue' to proceed.",
      component: (
        <Image
          source={require("../../assets/chatbot-chathistory-min.png")}
          style={{ width: "90%", height: "80%" }}
          resizeMode={"contain"}
        />
      ),
    },
  ],
};
