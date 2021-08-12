import { triggers } from "../../../components/chatbot/phraseTriggers";

describe("Phrase Triggers", () => {
  test("has correct properties", async () => {
    //   ensures animation update phrase triggers are reachable + correct
    expect(triggers["Watch this!"]).toBe("dance");
    expect(triggers["Opening up your default email client now..."]).toBe(
      "email"
    );
    expect(triggers["Opening the dial screen now..."]).toBe("phone");
    expect(triggers["Opening my profile now..."]).toBe("linkedin");
    expect(
      triggers[
        "I do have some magic tricks up my sleeve, especially levitation."
      ]
    ).toBe("magic");

    // Check length - if changed - this test will also fail and thus should be updated.
    expect(Object.keys(triggers).length).toBe(5);
  });
});
