using UnityEngine;
using System.Collections;
using Vuforia;

public class CameraFocusController : MonoBehaviour
{


   // credit to Vuforia Developer Library
   // source: https://library.vuforia.com/articles/Solution/Working-with-the-Camera.html#Camera-Focus-Modes
   void Start() {
    var vuforia = VuforiaARController.Instance;
    vuforia.RegisterVuforiaStartedCallback(OnVuforiaStarted);
    vuforia.RegisterOnPauseCallback(OnPaused);
   }

   private void OnVuforiaStarted() {
    CameraDevice.Instance.SetFocusMode(
        CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
   }

   private void OnPaused(bool paused) {
    if (!paused) // resumed
    {
         // Set again autofocus mode when app is resumed
         CameraDevice.Instance.SetFocusMode(
            CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
    }
   }
}
