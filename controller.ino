const int relayPin = 8; // connect pin 8 to IoT Relay control 

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Turn light ON for 16 hours
  digitalWrite(relayPin, HIGH);
  delay(16UL * 60UL * 60UL * 1000UL);  

  // Turn light OFF for 8 hours
  digitalWrite(relayPin, LOW);
  delay(8UL * 60UL * 60UL * 1000UL);  