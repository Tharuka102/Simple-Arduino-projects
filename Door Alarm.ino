const int doorSensorPin = 2;  // Pin connected to reed switch or button
const int alarmPin = 13;      // Buzzer or LED pin
int doorState = 0;            // Variable to store the sensor state

void setup() {
  pinMode(doorSensorPin, INPUT_PULLUP); // Use internal pull-up resistor
  pinMode(alarmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  doorState = digitalRead(doorSensorPin); // Read door sensor

  if (doorState == LOW) { // LOW = Door opened (if using normally closed switch)
    digitalWrite(alarmPin, HIGH); // Activate alarm
    Serial.println("Door Open - Alarm ON!");
  } else {
    digitalWrite(alarmPin, LOW);  // Deactivate alarm
    Serial.println("Door Closed - Alarm OFF");
  }

  delay(100); // Short delay
}
