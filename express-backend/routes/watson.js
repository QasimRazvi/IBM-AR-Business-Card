var express = require("express");
var router = express.Router();
const { response } = require("../app");
// import functions to handle watson logic
var watson = require("../controllers/watson_controller");

// ROUTES

// base url gets new session
router.get("/", async function (req, res, next) {
  res.json(await watson.newSession());
});

// message takes text input returns text response
router.post("/message", async function (req, res, next) {
  // param checks
  if (req.body.message === undefined) {
    res.status(400);
  } else {
    try {
      const botResponse = watson.messageController(req);
      res.status(200).json(await botResponse);
    } catch (err) {
      console.log(err);
      res.status(500);
    }
  }
});

// takes message, returns response text + speech url
router.post("/message-text-tts-response", async function (req, res, next) {
  // param checks
  if (req.body.message === undefined) {
    res.status(400);
  } else {
    try {
      const botResponse = watson.messageToSpeechAndTextController(req);
      // return text via Json + speech files to serve
      res.status(200).json(await botResponse);
    } catch (err) {
      console.log(err);
      res.status(500);
    }
  }
});

// upload - receieves recorded audio for speech to text processing, returns text
router.post(
  "/upload",
  watson.upload.single("soundBlob"),
  async function (req, res, next) {
    if (req.file === undefined) {
      res.status(400);
    } else {
      try {
        const textFromSpeech = watson.messageToSpeechAndTextController(req);
        res.status(200).json(await textFromSpeech);
      } catch (err) {
        console.log(err);
        res.status(500);
      }
    }
  }
);

module.exports = router;
