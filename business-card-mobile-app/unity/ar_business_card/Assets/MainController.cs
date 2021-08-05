using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainController : MonoBehaviour
{
  public PlayerController Avatar;
    // Start is called before the first frame update
    void Start()
    {
      UnityMessageManager.Instance.SendMessageToRN("Initialised");

    }

    // Update is called once per frame
    void Update()
    {
      if (Input.GetKeyDown("i"))
      {
          Avatar.animationState = "idle";
      }
      else if (Input.GetKeyDown("t"))
      {
          Avatar.animationState = "talking";
      }
      else if (Input.GetKeyDown("d"))
      {
          Avatar.animationState = "dancing";
      }

    }
}
