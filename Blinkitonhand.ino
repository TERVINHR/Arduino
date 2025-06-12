int IRE = 2, IRR = 3, SEN = 0, INDICATOR = 13;
void setup() {
  pinMode(INDICATOR, OUTPUT);
  pinMode(IRE, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(IRR, INPUT);
}

void loop() {
  delay(2000);
  digitalWrite(IRE, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  SEN = digitalRead(IRR);
  (SEN) ? (digitalWrite(INDICATOR, LOW)) : (digitalWrite(INDICATOR, HIGH));
}
