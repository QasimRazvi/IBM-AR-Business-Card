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
  // Chatbot has standard set of phrases, although some can be modified with users name etc.
  // We do not need to request tts for text that we have previously processed.
  //Filenames can be saved with filename of hash function applied to text. Then this can be checked on any new input and only sent to Watson if necessary.
  // improve performance speed + cost

  function stringToHash(string) {
    // unique string hashing function  - source: https://www.geeksforgeeks.org/how-to-create-hash-from-string-in-javascript/
    var hash = 0;

    if (string.length == 0) return hash;

    for (i = 0; i < string.length; i++) {
      char = string.charCodeAt(i);
      hash = (hash << 5) - hash + char;
      hash = hash & hash;
    }

    return hash;
  }
  const hashedText = stringToHash(inputText);
  const uri = "speech_responses/" + hashedText + "_" + voice + ".wav";
  const storageLocation = "public/" + uri;
  try {
    if (fs.existsSync(storageLocation)) {
      return uri;
    } else {
      // does not exists -> retrieve speech from watson API
      let params = { text: inputText, voice: voice, accept: "audio/wav" };
      return textToSpeech
        .synthesize(params)
        .then((response) => {
          const audio = response.result;
          return textToSpeech.repairWavHeaderStream(audio);
        })
        .then((repairedFile) => {
          fs.writeFileSync(storageLocation, repairedFile); // write file
          console.log("audio.wav written with a corrected wav header");
          // return saved file location
          return uri;
        })
        .catch((err) => {
          console.log(err);
        });
    }
  } catch (err) {
    console.log(err);
  }
}

// Speech to Text processor (STT)
const speechToText = new SpeechToTextV1({
  authenticator: new IamAuthenticator({
    apikey: process.env.WATSON_STT_API_KEY,
  }),
  serviceUrl: process.env.WATSON_STT_URL,
});

function stt(audiofile) {
  console.log(audiofile);
  let params = {
    audio: fs.createReadStream(audiofile),
    contentType: "audio/wav",
  }; // TODO - file location + contenttype (may need to be calculated)
  // console.log(params.audio);
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

// Speech to Text v2
// Should stream from the client, backend to provide bearerToken to authorise access and protect API secrets
console.log(speechToText.tokenManager);
const { IamTokenManager } = require("ibm-watson/auth");

const SpeechTextAuthenticator = new IamTokenManager({
  apikey: process.env.WATSON_STT_API_KEY,
});

router.get("/stt-token", function (req, res) {
  return SpeechTextAuthenticator.requestToken()
    .then(({ result }) => {
      res.json({
        accessToken: result.access_token,
        url: process.env.WATSON_STT_URL,
      });
    })
    .catch(console.error);
});

// base url get snew session
router.get("/", async function (req, res, next) {
  res.json(await newSession());
});

// message takes text input returns text response
router.post("/message", async function (req, res, next) {
  console.log(req.body);
  // if session null, assume first contact - initialise session + pass it back
  var session = req.body.session_id == null ? await newSession() : req.body;
  var botResponse = await msgHandler(session.session_id, req.body.message); //await messageStateful(req.body.sessionId, req.body.message);
  res.json(await botResponse); //.result.output);
});

// takes message, returns response text + speech url
router.post("/message-text-tts-response", async function (req, res, next) {
  console.log(req.body);

  // convert text to speech and stream it back
  // if session null, assume first contact - initialise session + pass it back
  var session = req.body.session_id == null ? await newSession() : req.body;
  var botResponse = await msgHandler(session.session_id, req.body.message) //await messageStateful(req.body.sessionId, req.body.message);
    .then((output) => getSpeechFromWatsonResponse(output));
  // function gets speech from text response for each response (loop)
  async function getSpeechFromWatsonResponse(watsonResponse) {
    var speech = [];
    for (let i = 0; i < watsonResponse.output.generic.length; i++) {
      // console.log(watsonResponse.output.generic[i].text);
      // let tmpSpeech = tts(watsonResponse.output.generic[i].text);
      // speech.push(tmpSpeech);
      let tmpSpeech = watsonResponse.output.generic[i].text;
      speech.push(tmpSpeech);
    }
    // Join sentences - add full stops + regex to reformat if necessary (remove extra full stops)
    // More efficient TTS since only one text/audio file sent/recieved
    var speech = [tts(speech.join(". ").replace(/\.+\s\.+\s|\.\.\s/g, ". "))];
    console.log(speech);
    // wait for all speech array promises to be fulfilled before return (if multiple)
    return { ...watsonResponse, speech_urls: await Promise.all(speech) };
  }

  // return text via Json + speech files to serve
  res.json(await botResponse); //.result.output);
});

// send requested speech file to client

// upload - receieves recorded audio for speech to text processing, returns text
var multer = require("multer");
var path = require("path");

// setup storage to tmp folder, ready for further processing
var storage = multer.diskStorage({
  destination: function (req, file, cb) {
    cb(null, "storage/tmp");
  },
  filename: function (req, file, cb) {
    cb(
      null,
      file.fieldname +
        Math.round(Math.random() * 1e9) +
        "-" +
        Date.now() +
        ".wav"
    );
  },
});

var upload = multer({ storage: storage });

router.post(
  "/upload",
  upload.single("soundBlob"),
  async function (req, res, next) {
    console.log("UPLOAD TRIGGERED");
    console.log(req.file);
    // get saved file .wav - convert to linear16 pcm compatible with STT
    saveLoc = "./storage/" + req.file.filename;
    const response = linear16(req.file.path, saveLoc).then((outPath) =>
      stt(outPath)
    );
    res.json(await response);
    console.log("response = ", await response);
    deleteFile([req.file.path, saveLoc]); // remove files from storage
  }
);

// asynchronous deletion of file via filesystem
function deleteFile(filePaths) {
  try {
    for (let i = 0; i < filePaths.length; i++) {
      fs.unlink(filePaths[i], (err) => {
        if (err) {
          console.log(err);
        }
      });
    }
  } catch (err) {
    console.log(err);
  }
}

module.exports = router;

const ffmpeg = require("fluent-ffmpeg");
const ffmpeg_static = require("ffmpeg-static");
const mime = require("mime");

// convert = function (fileIn, fileOut) {
//   ffmpeg().setFfmpegPath(ffmpeg_static.path).input()
// }

async function linear16(filePathIn, filePathOut) {
  if ("object" === typeof filePathIn && !filePathOut) {
    const { inPath, outPath } = filePathIn;
    filePathIn = inPath;
    filePathOut = outPath;
  }
  console.log(filePathIn);
  if (!filePathIn || !filePathOut) {
    throw new Error("You must specify a path for both input and output files.");
  }
  if (!fs.existsSync(filePathIn)) {
    throw new Error("Input file must exist.");
  }
  if (mime.getType(filePathIn).indexOf("audio") <= -1) {
    throw new Error("File must have audio mime.");
  }

  return new Promise((resolve, reject) => {
    try {
      ffmpeg()
        .setFfmpegPath(ffmpeg_static.path)
        .input(filePathIn)
        .outputOptions([
          // '-f s16le',
          "-acodec pcm_s16le",
          // // '-vn',
          // '-ac 1',
          // '-ar 16k',
          // '-map_metadata -1'
        ])
        .save(filePathOut)
        .on("end", () => resolve(filePathOut));
    } catch (e) {
      reject(e);
    }
  });
}
