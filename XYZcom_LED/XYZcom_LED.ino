int x,y,z;
int greenLed = 4; // the pin that the LED is attached to
int redLed = 2;   // the pin that the LED is attached to

int brightnessR = 0;    // how bright the LED is
int fadeAmountR = 5;    // how many points to fade the LED by

int brightnessG = 0;    // how bright the LED is
int fadeAmountG = 5;    // how many points to fade the LED by

void setup() {
  Serial.begin(9600); 
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  x = analogRead(0); //read analog input pin 0
  y = analogRead(1); //read analog input pin 1
  z = analogRead(2); //read analog input pin 2
  
  Serial.print("\naccelerations are x, y, z: ");
  Serial.print(x, DEC); //print the acceleration in the x axis
  Serial.print(" "); //prints a space between the numbers
  Serial.print(y, DEC); //print the acceleration in the y axis
  Serial.print(" "); //prints a space between the numbers
  Serial.print(z, DEC); //print the acceleration in the z axis
 
  delay(100);
  
  if (x < 340) {
  analogWrite(greenLed, brightnessG);    
  analogWrite(redLed, brightnessR);
  
  // change the brightness for next time through the loop:
  brightnessG = brightnessG + fadeAmountG;

  // reverse the direction of the fading at the ends of the fade: 
  brightnessR = brightnessR + fadeAmountR;
    fadeAmountR = -fadeAmountR ; 
     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);
  }
  
  else {
  analogWrite(redLed, brightnessR);    
  analogWrite(greenLed, brightnessG);

  // change the brightness for next time through the loop:
  brightnessR = brightnessR + fadeAmountR;

  // reverse the direction of the fading at the ends of the fade: 
    brightnessG = brightnessG + fadeAmountG;
    fadeAmountG = -fadeAmountG ; 
    
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);
  }
  
}
