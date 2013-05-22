int greenLED = 6;
int redLED = 5;
int yellowLED = 3;

void setup() {
  Serial.begin(9600); 
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  int valorLeitura = analogRead(A0);
  
  Serial.println(valorLeitura);
  
  if (valorLeitura > 682 && valorLeitura <= 1023){
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
     digitalWrite(greenLED, HIGH);
  }
  if( valorLeitura > 341 && valorLeitura <= 682) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
  } 
  if( valorLeitura > 0 && valorLeitura <= 341) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }
  
  delay(500);
}
