

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int valorLeitura = analogRead(A0);
  
  Serial.println(valorLeitura);
  
  
  
  delay(500);
}
