/* sensor de temperatura */

void setup() {
Serial.begin(9600);
Serial.println("Thermistor voltage and resistance measurement:");
Serial.println("\n  Vo  Rt  T(C)");
}

void loop() {
  int ThermistorPin = 1;
  int Vo;
  float R = 9870.0;
  float logRt, Rt, T;
  float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
  
  Vo = analogRead(ThermistorPin);
  Rt = R* (1023.0 / float(Vo) - 1.0);
  logRt = log (Rt);
  T = (1.0 / (c1 + c2 * logRt + c3*logRt * logRt* logRt)) -273.15;
  
  Serial.print(" "); Serial.print(Vo);
  Serial.print(" "); Serial.print(Rt);
  Serial.print(" "); Serial.println(T);
  delay(200);
  
}
