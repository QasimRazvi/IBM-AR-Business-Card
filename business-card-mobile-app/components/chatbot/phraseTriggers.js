import { updateUnityAnimationState } from "../../utils/unity/unity.utils";
import * as MailComposer from "expo-mail-composer";
import { Linking, Platform } from "react-native";

// This file specifies phrase triggers (from watson response) and custom functions to run in response.
// These will be checked and then executed after response has been receieved and Watson speech audio has finished playing.
// values like phone number. email etc are currently hardcoded but could be retrieved from context passed to Watson if more than one card in supported in future app versions.

// trigger dictionary - O(1)
const triggers = {
  "Watch this!": "dance",
  "Opening up your default email client now...": "email",
  "Opening the dial screen now...": "phone",
  "Opening my profile now...": "linkedin",
  "I do have some magic tricks up my sleeve, especially levitation.": "magic",
};

// Function to register specific watson response + trigger actions
export const checkAndExecuteTrigger = (chatObject) => {
  // check dictionary
  if (triggers.hasOwnProperty(chatObject.text)) {
    const action = triggers[chatObject.text];

    // match action
    switch (action) {
      case "dance":
        // only affects AR - chatbot will continue as normal.
        updateUnityAnimationState("dancing");
        break;
      case "email":
        // "\"j0nnymac@uk.ibm.com\"" hardcoded for this prototype version with support for only John (one card)
        console.log("mail triggered");
        MailComposer.isAvailableAsync().then(() =>
          MailComposer.composeAsync({
            recipients: ["j0nnymac@uk.ibm.com"],
            subject: "This app rocks!",
            body: "Hi John, \n\nThis Augmented Reality AI Business Card is great!",
          })
        );
        break;

      case "phone":
        // 07*********
        // open dial screen
        const phoneNum = "07*********";
        console.log("opening dial screen");
        if (Platform.OS == "ios") {
          Linking.openURL("telprompt:" + phoneNum);
        } else {
          // android
          Linking.openURL("tel:" + phoneNum);
        }
        break;

      case "linkedin":
        // https://uk.linkedin.com/in/jonmcnamara
        Linking.openURL("https://uk.linkedin.com/in/jonmcnamara");
        break;

      case "magic":
        // only affects AR - chatbot will continue as normal.
        updateUnityAnimationState("magic");
        break;

      default:
        break;
    }
  }
};
