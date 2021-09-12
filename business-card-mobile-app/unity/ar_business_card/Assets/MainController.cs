using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class MainController : MonoBehaviour
{
  public PlayerController Avatar;
  private static string[] validAnimOptions = {"idle","talking", "thinking", "dancing", "magic"};
    // Start is called before the first frame update
    void Start()
    {
      UnityMessageManager.Instance.SendMessageToRN("Initialised");

    }

    // Update is called once per frame
    void Update()
    {
      // Testing state changes + transitions within Unity
      if (Input.GetKeyDown("i"))
      {
          Avatar.animationState = "idle";
      }
      else if (Input.GetKeyDown("t"))
      {
          Avatar.animationState = "talking";
      }
      else if (Input.GetKeyDown("h"))
      {
          Avatar.animationState = "thinking";
      }
      else if (Input.GetKeyDown("d"))
      {
          Avatar.animationState = "dancing";
      }
      else if (Input.GetKeyDown("m"))
      {
          Avatar.animationState = "magic";
      }

    }

// receives messages from RN
  void onMessage(string message ) {
    // var receievedData = message.getData<string>();
    Debug.Log("React message receieved");
    var receievedData = message;
    Debug.Log(receievedData);

    // check valid animation
    if (validAnimOptions.Contains(receievedData)) {
      Avatar.animationState = receievedData;
    }
    else {
      Debug.Log("Invalid animation state provided");
      Avatar.animationState = "idle";
    }
  }
}
