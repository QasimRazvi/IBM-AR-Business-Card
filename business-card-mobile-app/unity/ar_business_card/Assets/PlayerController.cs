using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
  public string animationState = "idle";
  private string prevAnimationState = null;
  private Animator animator;
  private AnimationClip[] clips;
  AnimatorClipInfo[] m_CurrentClipInfo;
  string m_ClipName;
  float m_CurrentClipLength;
  private static string[] idleAnimations = {"Cocky Head Turn", "Breathing Idle", "Happy Hand Gesture", "Looking", "Weight Shift", "Looking Down", "Laughing", "Idle", "Head Gesture", "Happy Idle", "Waving"};
  private static string[] talkingAnimations = {"Talking", "Talking-2", "Talking-3", "Pointing Forward"};
  private static string[] thinkingAnimations = {"Agreeing", "Thinking"};
  private static string[] dancingAnimations = {"Run To Flip", "Slide Hip Hop Dance", "Macarena Dance", "Locking Hip Hop Dance"};
  private static string[] magicAnimations = {"Gravity-defy1", "Gravity-defy2"};
  private static IDictionary<string, string[]> animStates = new Dictionary<string, string[]>(){
    {"idle", idleAnimations},
    {"talking", talkingAnimations},
    {"thinking", thinkingAnimations},
    {"dancing", dancingAnimations},
    {"magic", magicAnimations}
  };
  float timer = 0;
  int randIndex = 0;
  // string[] currAnimList = animStates[animationState];
  // private string[] currAnimList = animStates[animationState];

    // Start is called before the first frame update
    void Start()
    {
      Debug.Log("Avatar initialised");
      // Initialise animation
      animator = GetComponent<Animator>();
      Debug.Log(animator.name);
    }

    // Update is called once per frame
    void Update()
    {
      var currAnimList = animStates[animationState];
      // if prev anim state != curr anim state -> set index to 0, set currAnimList, call play anim loop
      if (prevAnimationState != animationState) {
        // Animation state has changed since previous frame
        // update prev for next frame conditional evaluation
        prevAnimationState = animationState;
        randIndex = 0;
        PlayAnimationLoop(currAnimList);
        return;
      } else {
        // if prev == curr state -> timer
        if (timer > 0) {
          timer -= Time.deltaTime;
        } else {
        // if timer finished -> call play anim loop to continue
        PlayAnimationLoop(currAnimList);
        }
      }
    }

    void PlayAnimationLoop(string[] currAnimList)
    {
      if (randIndex == currAnimList.Length) {
        // reset index to trigger reshuffle if reached zero (end of shuffled array)
        randIndex = 0;
      }
      if (randIndex == 0 ) {
        // reshuffle currAnimList (random)
        ShuffleAnimOrder(currAnimList);
      }

      // Fade in next animation over 0.1f normalised time for fluid tranistions between animationStates
      animator.CrossFade("Base Layer." + currAnimList[randIndex], 0.1f);
      // Debug.Log("Base Layer." + currAnimList[randIndex]);
      randIndex++;
      // Debug.Log("INDEX updated");
      // Debug.Log(randIndex);
      m_CurrentClipInfo = animator.GetCurrentAnimatorClipInfo(0);
     //  //Access the current length of the clip
      m_CurrentClipLength = m_CurrentClipInfo[0].clip.length;
      // Debug.Log(m_CurrentClipInfo[0]);
      // set timer to clip length
      timer = m_CurrentClipLength;
    }

    void ShuffleAnimOrder(string[] currAnimList) {
      // random
      System.Random rand = new System.Random();

      // Shuffle animation array (in-place)
      int n = currAnimList.Length;
      while (n > 1)
      {
          int k = rand.Next(n--);
          string temp = currAnimList[n];
          currAnimList[n] = currAnimList[k];
          currAnimList[k] = temp;
      }
    }
}
