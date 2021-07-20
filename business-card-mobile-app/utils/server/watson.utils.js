// imports
// const SpeechToTextV1 = require("ibm-watson/speech-to-text/v1");
// const { BearerTokenAuthenticator } = require("ibm-watson/auth");
// // const fs = require("fs");

// configure params for the express server
const watsonConfig = {
  baseUrl: "http://192.168.0.61:3001/watson/",
  //   exp://192.168.0.61:19000
};

// // Send recorded speech from phone mic to API for STT processing
export const speechToText = async (fileuri) => {
  let formdata = new FormData();
  formdata.append("soundBlob", {
    uri: fileuri,
    type: `audio/wav`,
    name: "recording.wav",
  });
  console.log(formdata);
  let url = watsonConfig.baseUrl + "upload";
  console.log("URL = ", url);
  const res = await fetch(url, {
    method: "POST",
    headers: {
      "Content-Type": "multipart/form-data",
    },
    body: formdata,
  });
  return await res.json();
  // .then((data) => console.log(data));
};

// export const textToSpeech = async ()

// Send Transcibed audio message recorded from mic to backed for Watson Assistant
export const textToAssistant = async (messageText, sessionId = null) => {
  // console.log("SESSION ID = ", sessionId);
  // console.log(sessionId == null);
  // console.log(sessionId == "");
  // if session id not provided or sessionId is , only send message, backend API will create a session and return it to us.
  if (sessionId == null || sessionId == "") {
    console.log("INSIDE THE IFF!!!");
    var params = {
      message: messageText,
    };
  } else {
    var params = {
      message: messageText,
      session_id: sessionId,
    };
  }
  console.log("ASSISTANT CALLED");
  console.log("ASSISTANT PARAMS = ", params);
  let url = watsonConfig.baseUrl + "message";
  const res = await fetch(url, {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify(params),
  });
  return await res.json();
    // .then((data) => console.log(data));
};

// if bearer token are necessary to communicate with Watson from client directly.
export const getSttToken = () => {
  let url = watsonConfig.baseUrl + "stt-token";
  return fetch(url).then((res) => res.json());
};
