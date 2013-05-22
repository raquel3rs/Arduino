int LED = 13;
int REED = 2; //sensor magnetico

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(REED, INPUT);
}

void loop() {
  if (digitalRead(REED)) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
}
