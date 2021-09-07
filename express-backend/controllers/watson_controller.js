var watsonServices = require("../services/watson_services");

const messageController = async (requestObj) => {
  var session =
    requestObj.body.session_id == null
      ? await watsonServices.newSession()
      : requestObj.body;
  var botResponse = await watsonServices.msgHandler(
    session.session_id,
    requestObj.body.message
  );
  return await botResponse;
};

/**
 * retrieve text & speech response from given text
 * @param {*} requestObj - request
 * @returns
 */
const messageToSpeechAndTextController = async (requestObj) => {
  // helper function
  async function getSpeechFromWatsonResponse(watsonResponse) {
    if (resIsSuccess(watsonResponse)) {
      var speech = [];
      for (let i = 0; i < watsonResponse.output.generic.length; i++) {
        let tmpSpeech = watsonResponse.output.generic[i].text;
        speech.push(tmpSpeech.trim());
      }
      // Join sentences - add full stops + regex to reformat if necessary
      // More efficient TTS since only one text/audio file sent/recieved
      speech.forEach((txt) => {
        if (txt[txt.length - 1].match(/[!.?]/g) == null) txt.concat(".");
      });
      var speech = [watsonServices.tts(speech.join(" "))];
      console.log(speech);
      // wait for all speech array promises to be fulfilled before return (if multiple)
      return { ...watsonResponse, speech_urls: await Promise.all(speech) };
    } else {
      return watsonResponse; // do nothing if error - return to route for error parsing
    }
  }

  // if session null, assume first contact - initialise session + pass it back
  var session =
    requestObj.body.session_id == null
      ? await watsonServices.newSession()
      : requestObj.body;
  var botResponse = await watsonServices
    .msgHandler(session.session_id, requestObj.body.message)
    .then((output) => getSpeechFromWatsonResponse(output));
  return await botResponse;
};

/**
 * Speech to text conversion from audio file
 * @param {*} requestObj - request
 * @returns
 */
const audioUpload = async (requestObj) => {
  // get saved file .wav - convert to linear16 pcm compatible with STT
  saveLoc = "./storage/" + requestObj.file.filename;
  const response = watsonServices
    .linear16(requestObj.file.path, saveLoc)
    .then((outPath) => watsonServices.stt(outPath));
  await response;
  watsonServices.deleteFile([requestObj.file.path, saveLoc]); // remove files from storage async
  return response;
};

/**
 * Check watson response for output.
 * @param {string} watsonResponse
 * @returns
 */
const resIsSuccess = (watsonResponse) => {
  return watsonResponse.output !== undefined;
};

// Parse Error function
const parseError = (watsonResponse) => {
  const parsedObj = JSON.parse(watsonResponse);
  let code = parsedObj.code,
    errorText = parsedObj.error,
    errorObject = parsedObj;

  return {
    code,
    errorText,
    errorObject,
  };
};

module.exports = {
  messageController: messageController,
  messageToSpeechAndTextController: messageToSpeechAndTextController,
  audioUpload: audioUpload,
  resIsSuccess: resIsSuccess,
  parseError: parseError,
};
