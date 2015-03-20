//  Toggle LED on OR off when the button is pressed.

// Define Input and Output pins
int INPUT_PIN = 8;
int OUTPUT_PIN = 13;
int BUZZER_PIN = 10;
int LED_STATUS = HIGH;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the input pin
  pinMode(INPUT_PIN, INPUT);
  // initialize the output pin
  pinMode(OUTPUT_PIN, OUTPUT);

  digitalWrite(OUTPUT_PIN, LED_STATUS);
  digitalWrite(BUZZER_PIN, LED_STATUS);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(INPUT_PIN) == HIGH) {
    if (LED_STATUS == HIGH) {
      LED_STATUS = LOW;
    } else {
      LED_STATUS = HIGH;
    }
    digitalWrite(OUTPUT_PIN,LED_STATUS);   // turn the LED on or off based on button input
    digitalWrite(BUZZER_PIN,LED_STATUS);   // turn the LED on or off based on button input
  }
}
