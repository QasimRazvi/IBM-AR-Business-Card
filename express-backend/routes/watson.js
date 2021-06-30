var express = require("express");
var router = express.Router();

// Watson Assistant setup (Assistant API v2)
const AssistantV2 = require("ibm-watson/assistant/v2");
const { IamAuthenticator } = require("ibm-watson/auth");
const { response } = require("../app");

const assistant = new AssistantV2({
  authenticator: new IamAuthenticator({
    apikey: process.env.WATSON_ASSISTANT_API_KEY,
  }),
  serviceUrl: process.env.WATSON_ASSISTANT_URL,
  version: process.env.API_VERSION,
});

async function newSession() {
  let result = assistant
    .createSession({
      assistantId: process.env.WATSON_ASSISTANT_ID,
    })
    .then((res) => {
      console.log(res);
      return res.result; //if session_id key returned then success
    })
    .catch((err) => {
      console.log("ERROR OCCURRED WHILE INITIALISING SESSION: ", err);
      return err;
    });
  return result;
}

async function messageStateful(sessionId, inputText) {
  let result = assistant
    .message({
      assistantId: process.env.WATSON_ASSISTANT_ID,
      input: { text: inputText },
      sessionId: sessionId,
    })
    .then((res) => {
      console.log(res);
      return res;
    })
    .catch((err) => {
      console.log("ERROR OCCURRED WHILE RETRIEVING MESSAGE RESPONSE: ", err);
      return err;
    });
  return result;
}

// Function help handle messages, errors and renewing session if expired
async function msgHandler(sessionId, inputText) {
  try {
    let botResponse = await messageStateful(sessionId, inputText);
    console.log(botResponse.result);
    if (botResponse["result"]) {
      // result has been returned successfully
      return { ...botResponse.result, session_id: sessionId };
    } else if (
      // If session expired
      botResponse.statusText == "Not Found" &&
      JSON.parse(botResponse.body).error == "Invalid Session"
    ) {
      console.log("REINITIALISING SESSION");
      let newSessionId = await newSession();
      let botResponse = await messageStateful(
        newSessionId.session_id,
        inputText
      );
      if (newSessionId["session_id"] && botResponse["result"]) {
        //result and session both successfully returned
        // return new session id to client if it has been updated.
        return { ...botResponse.result, session_id: newSessionId.session_id };
      } else {
        // something failed - return error msg and code from body
        return newSessionId["session_id"]
          ? newSessionId.body
          : botResponse.body;
      }
    } else {
      // other errors not session
      console.log("ANOTHER ERROR OCCURRED"); // will also catch missing params etc
      return botResponse.body
        ? botResponse.body
        : { error: botResponse.message };
    }
  } catch (err) {
    return { error: err };
  }
}

// Speech to text and text to Speech via Watson

// Setup
const fs = require("fs");
const TextToSpeechV1 = require("ibm-watson/text-to-speech/v1");
const SpeechToTextV1 = require("ibm-watson/speech-to-text/v1");

// Text to Speech processor (TTS)
const textToSpeech = new TextToSpeechV1({
  authenticator: new IamAuthenticator({
    apikey: process.env.WATSON_TTS_API_KEY,
  }),
  serviceUrl: process.env.WATSON_TTS_URL,
});

function tts(inputText, voice = "en-US_MichaelV3Voice") {
  let params = { text: inputText, voice: voice, accept: "audio/wav" };
  return textToSpeech
    .synthesize(params)
    .then((response) => {
      const audio = response.result;
      return textToSpeech.repairWavHeaderStream(audio);
    })
    .then((repairedFile) => {
      fs.writeFileSync("audio.wav", repairedFile); // TODO - change file location/naming to handle higher load
      console.log("audio.wav written with a corrected wav header");
    })
    .catch((err) => {
      console.log(err);
    });
  // TODO - using websockets may allow for streaming
}

// Speech to Text processor (STT)
const speechToText = new SpeechToTextV1({
  authenticator: new IamAuthenticator({
    apikey: process.env.WATSON_STT_API_KEY,
  }),
  serviceUrl: process.env.WATSON_STT_URL,
});

function sts(audiofile) {
  let params = {
    audio: fs.createReadStream("./hello_world.wav"),
    contentType: "audio/l16; rate=44100",
  }; // TODO - file location + contenttype (may need to be calculated)
  return speechToText
    .recognize(params)
    .then((response) => {
      console.log(JSON.stringify(response.result));
      return response.result;
    })
    .catch((err) => {
      console.log(err);
    });
  // TODO - using websockets may allow for streaming
}

router.get("/", async function (req, res, next) {
  res.json(await newSession());
});

router.post("/message", async function (req, res, next) {
  console.log(req.body);
  // if session null, assume first contact - initialise session + pass it back
  var session =
    req.body.session_id == null
      ? await newSession()
      : req.body;
  var botResponse = await msgHandler(session.session_id, req.body.message); //await messageStateful(req.body.sessionId, req.body.message);
  res.json(await botResponse); //.result.output);
});

module.exports = router;
