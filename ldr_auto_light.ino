int ldrPin = A0;       // LDR connected to analog pin A0
int ledPin = 13;       // LED connected to digital pin 13
int ldrValue = 0;      // Variable to store LDR reading

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Optional: for debugging
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read LDR value
  Serial.println(ldrValue);      // Show value in Serial Monitor

  if (ldrValue < 500) {          // Threshold value for darkness
    digitalWrite(ledPin, HIGH);  // Turn on LED in dark
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED in light
  }

  delay(200); // Small delay for stability
}
