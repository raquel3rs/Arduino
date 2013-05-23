/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
// initialize serial communication at 9600 bits per second:
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH); 
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  
  Serial.println(sensorValue);
  
  
  if(sensorValue <= 600) {
    digitalWrite(led, LOW);
    Serial.println("Desligado!");
  } else {
    Serial.println("Ligado");
  }
    delay(3000);        // delay in between reads for stability
}
