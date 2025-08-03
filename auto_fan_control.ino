const int tempPin = A0;    // LM35 connected to analog pin A0
const int fanPin = 13;     // Fan (or LED) connected to digital pin 13
float tempC = 0;           // Temperature in Celsius

void setup() {
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(tempPin);         // Read raw value
  tempC = (sensorValue * 5.0 * 100.0) / 1024.0;   // Convert to Celsius
  Serial.print("Temperature: ");
  Serial.println(tempC);

  if (tempC > 30) {                 // If temperature > 30°C
    digitalWrite(fanPin, HIGH);    // Turn on fan
  } else {
    digitalWrite(fanPin, LOW);     // Turn off fan
  }

  delay(1000); // Wait 1 second before next reading
}
