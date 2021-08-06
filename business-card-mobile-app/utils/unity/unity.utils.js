import { UnityModule } from "@asmadsen/react-native-unity-view";

export const sendToUnity = (methodName, message) => {
  // messages to Unity are handled by Unity GameObject/Main by methods found within the MainController script
  UnityModule.postMessage("Main", methodName, message);
};

export const updateUnityAnimationState = (message) => {
  sendToUnity("onMessage", message);
};
