// Transmitter1

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int input;

  input = digitalRead(2);
  digitalWrite(4, input);
  digitalWrite(13, input);
}
