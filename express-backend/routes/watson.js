var express = require("express");
var router = express.Router();
const { response } = require("../app");
const { parseError } = require("../controllers/watson_controller");
// import functions to handle watson logic
var watson = require("../controllers/watson_controller");
var watsonServices = require("../services/watson_services");

// ROUTES

// base url gets new session
router.get("/", async function (req, res, next) {
  res.json(await watson.newSession());
});

// message takes text input returns text response
router.post("/message", async function (req, res, next) {
  try {
    const botResponse = watson.messageController(req);
    if (watson.resIsSuccess(await botResponse)) {
      res.status(200).json(await botResponse);
    } else {
      const { code, errorObject } = parseError(await botResponse);
      console.log(errorObject);
      res.status(code).json(errorObject);
    }
  } catch (err) {
    console.log(err);
    res.status(500);
  }
});

// takes message, returns response text + speech url
router.post("/message-text-tts-response", async function (req, res, next) {
  try {
    const botResponse = watson.messageToSpeechAndTextController(req);
    if (watson.resIsSuccess(await botResponse)) {
      // return text via Json + speech files to serve
      res.status(200).json(await botResponse);
    } else {
      const { code, errorObject } = parseError(await botResponse);
      console.log(errorObject);
      res.status(code).json(errorObject);
    }
  } catch (err) {
    console.log(err);
    res.status(500);
  }
});

// upload - receieves recorded audio for speech to text processing, returns text
router.post(
  "/upload",
  watsonServices.upload.single("soundBlob"),
  async function (req, res, next) {
    try {
      const textFromSpeech = watson.messageToSpeechAndTextController(req);
      res.status(200).json(await textFromSpeech);
    } catch (err) {
      console.log(err);
      res.status(500);
    }
  }
);

module.exports = router;
