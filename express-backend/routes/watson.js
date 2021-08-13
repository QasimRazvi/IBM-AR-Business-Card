var express = require("express");
var router = express.Router();
const { response } = require("../app");
// import functions to handle watson logic
var watson = require("../services/watson_services");

// ROUTES

// base url gets new session
router.get("/", async function (req, res, next) {
  res.json(await watson.newSession());
});

// message takes text input returns text response
router.post("/message", async function (req, res, next) {
  // if session null, assume first contact - initialise session + pass it back
  var session =
    req.body.session_id == null ? await watson.newSession() : req.body;
  var botResponse = await watson.msgHandler(
    session.session_id,
    req.body.message
  );
  res.json(await botResponse);
});

// takes message, returns response text + speech url
router.post("/message-text-tts-response", async function (req, res, next) {
  console.log(req.body);

  // convert text to speech and send it back
  // if session null, assume first contact - initialise session + pass it back
  var session =
    req.body.session_id == null ? await watson.newSession() : req.body;
  var botResponse = await watson
    .msgHandler(session.session_id, req.body.message) //await messageStateful(req.body.sessionId, req.body.message);
    .then((output) => getSpeechFromWatsonResponse(output));
  // function gets speech from text response for each response (loop)
  async function getSpeechFromWatsonResponse(watsonResponse) {
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
    var speech = [watson.tts(speech.join(" "))];
    console.log(speech);
    // wait for all speech array promises to be fulfilled before return (if multiple)
    return { ...watsonResponse, speech_urls: await Promise.all(speech) };
  }

  // return text via Json + speech files to serve
  res.json(await botResponse); //.result.output);
});

// upload - receieves recorded audio for speech to text processing, returns text
router.post(
  "/upload",
  watson.upload.single("soundBlob"),
  async function (req, res, next) {
    console.log("UPLOAD TRIGGERED");
    // get saved file .wav - convert to linear16 pcm compatible with STT
    saveLoc = "./storage/" + req.file.filename;
    const response = watson
      .linear16(req.file.path, saveLoc)
      .then((outPath) => watson.stt(outPath));
    res.json(await response);
    // console.log("response = ", await response);
    watson.deleteFile([req.file.path, saveLoc]); // remove files from storage
  }
);

module.exports = router;
