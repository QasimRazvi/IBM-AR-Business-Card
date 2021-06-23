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

//  TODO - SESSION AND MSG CODE NEEDS REFACTORING TO BETTER ACCOMODATE MORE ERROR HANDLING ACCORDING TO HOW ERRORS ARE RETURNED VIA API.
function newSession() {
  return new Promise((resolve, reject) => {
    assistant
      .createSession({
        assistantId: process.env.WATSON_ASSISTANT_ID,
      })
      .then((res) => {
        // console.log(res);
        resolve(res.result);
      })
      .catch((err) => {
        console.log("ERROR OCCURED!");
        // console.log(err);
        reject(err);
      });
  }).catch((err) => {
    console.log(err.statusText);
    return err.statusText;
  });
}

function messageStateful(sessionId, inputText) {
  return new Promise((resolve, reject) => {
    assistant
      .message({
        assistantId: process.env.WATSON_ASSISTANT_ID,
        input: { text: inputText },
        sessionId: sessionId,
      })
      .then((res) => {
        console.log(res);
        resolve(res);
      })
      .catch((err) => {
        // console.log(err);
        reject(err);
      });
  }).catch((err) => {
    console.log(err);
    return err;
  });
}

async function msgHandler(sessionId, inputText) {
  try {
    var botResponse = await messageStateful(sessionId, inputText);
    console.log("FIRST TRY = ", botResponse);
    console.log(JSON.stringify(botResponse.result, null, 2));
    if (botResponse.statusText == "OK") {
      return botResponse.result;
    }

    if (
      botResponse.statusText == "Not Found" &&
      JSON.parse(botResponse.body).error == "Invalid Session"
    ) {
      console.log("REINITIALISING SESION");
      // if invalid session try reinitialising session
      try {
        var newSessionId = await newSession();
        var botResponse = await messageStateful(
          newSessionId.session_id,
          inputText
        );
        console.log(botResponse);
        // return new session id to client if it has been updated.
        return { ...botResponse.result, session_id: newSessionId.session_id };
      } catch (err) {
        console.log("error occured reinitlialising session. Failed.");
        console.log(err);
        return err.body;
      }
    } else {
      console.log("DIDNT MATCH ON INVALID SESSION. OTHER ERROR OCCURED");
      console.log(botResponse.body);
    }
  } catch (err) {
    console.log("ERROR OCCURED WHILE RETRIEVING MESSAGE RESPONSE");
    // // return err;
    // console.log("STATUS TEXT = ", botResponse.statusText);
    // console.log("BODY ERROR = ", JSON.parse(err.body).error);
  }
}

router.get("/", async function (req, res, next) {
  res.json(await newSession());
});

router.post("/message", async function (req, res, next) {
  console.log(req.body);
  var botResponse = await msgHandler(req.body.sessionId, req.body.message); //await messageStateful(req.body.sessionId, req.body.message);
  res.json(await botResponse); //.result.output);
});

module.exports = router;
