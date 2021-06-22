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
      });
  });
}


router.get("/", async function (req, res, next) {
  res.json(await newSession())
});

router.post("/", function (req, res, next) {
  res.send("POST request at Watson");
});

module.exports = router;
