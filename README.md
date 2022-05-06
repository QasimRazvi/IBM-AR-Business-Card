# IBM-AR-Business-Card
IBM Augmented Reality AI Business Card - Proof of Concept project as part of UCL MSc Computer Science



https://user-images.githubusercontent.com/71948903/133063199-96ab92d5-8850-4076-950f-cd33593f23d3.mp4

Full video demo with voiceover commentary: https://mediacentral.ucl.ac.uk/Player/HFb9E1EF
OR here: https://youtu.be/MuJBTieYWm8

## File Structure

The file structure is outlined below in a directory tree structure. Please note, all files and directories that exist are not mapped in the diagrams below - only core folders/modules/files are drawn. The root directory is as follows:

```bash
/
├── business-card-mobile-app  // React Native application code
├── express-backend           // Server code (Node.js + Express)
├── project-demo-card         //demo card imgs to print
├── watson-assistant-business-card.json // Watson Assistant model
```

### Mobile Application
```bash
/business-card-mobile-app 
├── tests             //tests
├── android           //native android app files + code
│   ├── UnityExport   //Android Unity app build
├── assets            //static assets (images + videos etc.)
├── components        //JSX components
├── ios               //native iOS app files + code
│   ├── UnityExport   //iOS Unity app build
├── screens           //JSX screens built with components
├── unity             //complete Unity application
├── utils             //utility functions
├── App.js            // main application file
├── index.js          //app start up entry point
```

### Unity Application
*N.B.* The complete unity application source files resides in the front-end mobile application folder in the ’unity’ subfolder. This folder can be opened as a project in Unity.
```bash
/business-card-mobile-app/unity 
├── Assets          //Project files
├── Animations      //animation files
├── Editor          //Vuforia configuration files
├── Robot Model     //Character files incl. animations + textures etc.
├── Scenes          //Game scene data
├── Scripts         //Unity x React Native message manager scripts
├── CameraFocusController.cs //Camera auto-focus
├── MainController.cs //Main script on runtime
├── PlayerController.cs //character controller class
```

### Back-end Server
```bash
/express-backend
├── controllers
│   ├── watson_controller.js  //Watson API request handling
├── public
│   ├── speech_responses      //speech file storage to serve to client
├── routes
│   ├── watson.js             //Watson API route handling
├── services
│   ├── watson_services.js    //core Watson API logic
├── storage
│   ├── tmp                   //temporary storage for user audio
├── tests
│   ├── hello world.wav       //test audio
│   ├── Watson.postman collection.json //postman tests
│   ├── Watson.postman test run.json //exported test results 
├── .env                      // environment config file
├── .env.example              //environment config example
├── app.js                    //main server file
```


## Deployment Setup
The following steps describe how to deploy the application: 
1. Setup Watson Assistant
    1. Create an IBM CLoud account if you do not have one already
    2. Follow the instructions in the IBM Cloud docs on ”getting started
        with Watson Assistant” found here: https://cloud.ibm.com/docs/
        assistant?topic=assistant-getting-started. Use this to create an Assitant instance
    3. Once created, you can now upload the model found in the source code as a dialog skill. Navigate to the ’Upload skill’ tab, and drag and drop the source code file named ’watson-assistant-business- card.json’ found in the project root. IBM Cloud instructions for this are also at https://cloud.ibm.com/docs/assistant?topic= assistant-skill-dialog-add
2. Setup Watson Text-to-Speech and Speech-to-Text resource instances
    1. To setup Text-to-Speech, follow the IBM Cloud instructions for ”Get-
    ting started” here - https://cloud.ibm.com/docs/text-to-speech
    2. To setup Speech-to-Text, follow the follow the IBM Cloud instructions for ”Getting started” here: https://cloud.ibm.com/docs/ speech-to-text
3. Setup back-end server
    1. Create a .env file in the ’express-backend’ directory
    i. This now needs to be populated with your API credentials for the IBM Watson services you have just set up.
    ii. The .env.example file (’express-backend/.env.example’) provides a template format. Copy its contents and paste it into the .env file.
    iii. Navigate to each resource in IBM Cloud. This should navigate you by default to the resource manage tab. Here you should copy the API key and URL into the .env file’s relevant variable.
    iv. If unsure, you may refer to the IBM Cloud API documentation for the resource via a simple internet search. For example, the url for the Watson Assistant API docs may be found here: https: //cloud.ibm.com/apidocs/assistant/assistant-v2
    2. The back-end code is now ready to be deployed on a hosting of your choice that supports Node.js. The deployment method will differ based on your hosting provider, so please follow their instructions.
4. Setup React Native mobile application
    1. Navigate to the ’business-card-mobile-app’ folder in the application.
    2. Modify the file ’business-card-mobile-app/utils/server/watson.utils.js’ by changing the address in the variables ’watsonUrl’ and ’baseUrl’ to your server’s address.
    3. Once this is changed the application is ready to be built. However, if you wish to test that everything is working you should:
    i. Ensure that Node.js is installed on your computer. This may be downloaded here: https://nodejs.org/en/download/.
    ii. The project is built with yarn commands rather than npm, so yarn command is preferred. Install yarn here: https://classic. yarnpkg.com/en/docs/install.
    iii. Ensure your current working directory is ’business-card-mobile- app’. Run the command ”yarn” from the terminal/command line to install dependencies.
    iv. Follow the instructions here to set your phone up for USB debug- ging mode and install the app: https://reactnative.dev/docs/ running-on-device.
    4. To build the final version, you should follow the relevant instructions for the platform:
    iOS Can be found here:
    https://reactnative.dev/docs/publishing-to-app-store
    Android Can be found here:
    https://reactnative.dev/docs/signed-apk-android
    5. Print demo business card
        1. The demo business card image assets are located in the folder ’project- demo-card’ in the root. This contains a demo front and back for the card. The front may be changed, however the back should remain the same as this is the image target for the AR application.

## Development Setup
There are several prerequisites for those wishing to continue development on the project:
1. Setup Watson Assistant, Watson Text-Speech and Watson Speech-to-text as mentioned in Appendix B.2. The developer should then also setup their back- end .env file too, populating it with their IBM Cloud API credentials for these services.
2. Install Node.js. This may be downloaded here: https://nodejs.org/en/ download/.
3. Install yarn. The project is built with yarn commands rather than npm, so yarn command is preferred. Install yarn here: https://classic.yarnpkg. com/en/docs/install.
4. Install Unity Hub to be able to continue work on the Unity project.


With these prerequisites fulfilled, the developer should now install the relevant de- velopment dependencies:
1. Navigate to the ’express-backend’ folder in the root. Run the ”yarn” com- mand in the terminal or command prompt.
2. Navigate to the ’business-card-mobile-app’ folder in the root. Run the ”yarn –dev” command in the terminal or command prompt.

Once dependencies have been installed:
+ To start the back-end server, the developer can run the ”yarn start” command from the ’express-backend’ folder.
+ To start the mobile application, the developer can run the ”yarn android” or ”yarn ios” command from the ’business-card-mobile-app’ folder. Please be sure that a phone is either plugged in with USB debugging mode turned on (https://reactnative.dev/docs/running-on-device) or that an emula- tor is running on your local machine (https://reactnative.dev/docs/0.64/environment-setup).

Now the developer should be set up to continue work on the project.

### Unity
With Unity Hub installed, it is possible to open up an existing Unity project. The de- veloper should open up ’business-card-mobile-app/unity’ in Unity Hub, and specify Unity version 2019.3f if prompted. The code set up to allow for Unity to commu- nicate with React Native and vice-versa may not work with later Unity versions.
To rebuild the Unity application, the developer should click the React Native window tab at the top of the screen. Then click either ”Export Android” or ”Export iOS” depending on the platform desired. This will build the Unity application and place it in the ’business-card-mobile-app/android/UnityExport’ or ’business-card- mobile-app/ios/UnityExport’ folders respectively.

### Testing
Front-end testing can be run via navigating to the ’business-card-mobile-app’ folder in the terminal/command prompt and running ”yarn test”.
Back-end tests should be imported into Postman to be able to execute. Post- man can be downloaded at https://www.postman.com/downloads/. Once downloaded and opened, click the import button and select the ’express- backend/tests/Watson.postman collection.json’ file from the source code. Fur- ther instructions can be found here: https://learning.postman.com/docs/ running-collections/working-with-data-files/. The back-end server should be running when executing tests.
