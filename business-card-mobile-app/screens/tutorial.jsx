import React from "react";
import {
  View
} from "react-native";
import Tutorial from "../components/tutorial/tutorial";
// data file with tutorial text + components
import { tutorialData } from "../components/tutorial/tutorialData";

const TutorialScreen = ({ route, navigation }) => {
  // Pull target tutorial from route.params enum("ar", "chatbot")
  const { target } = route.params;
  console.log(tutorialData[target]);
  const data = tutorialData[target];
  const nextScreen = () => {
    navigation.navigate(target == "ar" ? "ARUnity" : "Chatbot");
  };

  return (
    <View style={{ flex: 1 }}>
      <Tutorial data={data} onContinue={nextScreen} />
    </View>
  );
};

export default TutorialScreen;
