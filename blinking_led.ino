
// Blink LED connected to pin 13 (built-in LED)

void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(500);             // Wait 500 milliseconds
  digitalWrite(13, LOW);  // Turn the LED off
  delay(500);             // Wait 500 milliseconds
}
