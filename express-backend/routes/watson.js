var express = require("express");
var router = express.Router();

// Watson Assistant setup (Assistant API v2)
const AssistantV2 = require("ibm-watson/assistant/v2");
const { IamAuthenticator } = require("ibm-watson/auth");

const assistant = new AssistantV2({
  authenticator: new IamAuthenticator({
    apikey: process.env.WATSON_ASSISTANT_API_KEY,
  }),
  serviceUrl: process.env.WATSON_ASSISTANT_URL,
  version: process.env.API_VERSION,
});

function newSession() {
  return new Promise((resolve) => {
    assistant
      .createSession({
        assistantId: process.env.WATSON_ASSISTANT_ID,
      })
      .then((res) => {
        console.log(res);
        // console.log(typeof res);
        resolve(res);
      })
      .catch((err) => {
        console.log(err);
        reject(err);
      });
  });
}

function messageStateful(sessionId, inputText) {
  return new Promise((resolve, reject) => {
    assistant
      .message({
        assistantId: process.env.WATSON_ASSISTANT_ID, 
        input: inputText,
        sessionId: sessionId,
      })
      .then((res) => {
        console.log(res);
        resolve(res);
      })
      .catch((err) => {
        console.log(err);
        reject(err);
      });
  });
}

router.get("/", async function (req, res, next) {
  res.json(await newSession());
});

router.post("/message", async function (req, res, next) {
  console.log(req.body);
  botResponse = await messageStateful(req.body.sessionId, req.body.message);
  console.log(botResponse.result.output.generic);
  res.json(botResponse.result.output);
});

module.exports = router;
