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
export const speechToText = (fileuri) => {
  let formdata = new FormData();
  formdata.append("soundBlob", {
    uri: fileuri,
    type: `audio/wav`,
    name: "recording.wav",
  });
  console.log(formdata);
  let url = watsonConfig.baseUrl + "upload";
  console.log("URL = ", url);
  return fetch(url, {
    method: "POST",
    headers: {
      "Content-Type": "multipart/form-data",
    },
    body: formdata,
  });
};

export const getSttToken = () => {
  let url = watsonConfig.baseUrl + "stt-token";
  return fetch(url).then((res) => res.json());
};

//  NEED TO USE SPECIaL PACKAGES 




// export const speechToTextClient = (serviceCredentials, audio) => {
//   const speechToText = new SpeechToTextV1({
//     authenticator: new BearerTokenAuthenticator({
//       bearerToken: serviceCredentials.accessToken,
//     }),
//     url: serviceCredentials.url,
//     version: "2020-09-24",
//     // add version to dotenv file in React Native to allow obvious changes later?
//   });
//   let params = {
//     audio: audio,
//     contentType: 'audio/l16; rate=44100',
//   };
//   return speechToText
//     .recognize(params)
//     .then((response) => {
//       console.log(JSON.stringify(response.result));
//       return response.result;
//     })
//     .catch((err) => {
//       console.log(err);
//     });
// };
