void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // LED ON
  delay(500);
  digitalWrite(13, LOW);  // LED OFF
  delay(500);
}
