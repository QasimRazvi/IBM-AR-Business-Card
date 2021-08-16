// Watson helper functions to handle API calls to server

// configure params for the express server
const watsonConfig = {
  watsonUrl: "http://192.168.0.61:3001/watson/",
  baseUrl: "http://192.168.0.61:3001/",
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
  // console.log(formdata);
  let url = watsonConfig.watsonUrl + "upload";
  console.log("URL = ", url);
  try {
    var res = await fetch(url, {
      method: "POST",
      headers: {
        "Content-Type": "multipart/form-data",
      },
      body: formdata,
    });
    if (res.ok) {
      return await res.json();
    } else {
      console.log(res);
      throw new Error("Server error occured. Please try again later.");
    }
  } catch (error) {
    console.log(error);
    throw new Error("An error occured. Please check your internet connection."); // network failed or similar
  }
};

export const getTextToSpeechUri = (audioUri) => {
  return audioUri !== null ? watsonConfig.baseUrl + audioUri : null;
};

// Send Transcibed audio message recorded from mic to backed for Watson Assistant
export const textToAssistant = async (
  messageText,
  sessionId = null,
  tts = false // text to speech
) => {
  // if session id not provided or sessionId is , only send message, backend API will create a session and return it to us.
  if (sessionId == null || sessionId == "") {
    var params = {
      message: messageText,
    };
  } else {
    var params = {
      message: messageText,
      session_id: sessionId,
    };
  }
  let url = tts
    ? watsonConfig.watsonUrl + "message-text-tts-response" // if tts = true, we retrieve speech file urls.
    : watsonConfig.watsonUrl + "message"; // otherwise only text response
  try {
    const res = await fetch(url, {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(params),
    });
    if (res.ok) {
      return await res.json();
    } else {
      console.log(res);
      throw new Error("Server error occured. Please try again later.");
    }
  } catch (error) {
    console.log(error);
    throw new Error("An error occured. Please check your internet connection."); // network failed or similar
  }
};
