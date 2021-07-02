// configure params for the express server
const watsonConfig = {
  baseUrl: "http://192.168.0.61:3001/watson/",
  //   exp://192.168.0.61:19000
};

// Send recorded speech from phone mic to API for STT processing
export const speechToText = (fileuri) => {
  let formdata = new FormData();
  formdata.append("soundBlob", {
    uri: fileuri,
    type: `audio/m4a`,
    name: "recording.m4a",
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
