/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

*/

int led = 10;           // The PWM pin the LED is attached to
int brightness = 0;    // How bright the LED is
int fadeAmount = 5;    // How many points to fade the LED by

// The setup routine runs once when you press reset:
void setup() {
  // Declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

 // The loop routine runs over and over again forever:
  void loop() {
  // Set the brightness of pin 9:
  analogWrite(led, brightness);

  // Change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // Wait for 30 milliseconds to see the dimming effect
  delay(30);
}
