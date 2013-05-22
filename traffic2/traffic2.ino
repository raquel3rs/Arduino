//Project 2 - Traffic Light 2

int ledDelay = 1000; //Delay in between changes
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT); 
}
void loop() {
  
  for(int i=1; i<=3; i++) {
    
  //turn the red light on
  digitalWrite(redPin, HIGH);
  delay(ledDelay); //wait 2 seconds
  digitalWrite(redPin, LOW); //turn off red
  
  digitalWrite(greenPin, HIGH); //turn on green
  delay(ledDelay); //wait 2 seconds
  digitalWrite(greenPin, LOW); //turn green off
  
  digitalWrite(yellowPin, HIGH); //turn yellow on
  delay(ledDelay); //wait ledDelay miliseconds
  digitalWrite(yellowPin, LOW); //turn yellow off 
}

  for(int i=1; i<=3; i++) {
  
  digitalWrite(yellowPin, HIGH); //turn yellow on
  delay(ledDelay); //wait ledDelay miliseconds
  digitalWrite(yellowPin, LOW); //turn yellow off
  
  digitalWrite(greenPin, HIGH); //turn on green
  delay(ledDelay); //wait 2 seconds
  digitalWrite(greenPin, LOW); //turn green off
  
  //turn the red light on
  digitalWrite(redPin, HIGH);
  delay(ledDelay); //wait 2 seconds
  digitalWrite(redPin, LOW); //turn off red
}
}
