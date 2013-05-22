//RED
int ledR = 9;           // the pin that the LED is attached to
int brightnessR = 0;    // how bright the LED is
int fadeAmountR = 5;    // how many points to fade the LED by

//Green
int ledG = 5;           
int brightnessG = 0;    
int fadeAmountG = 5;    

//Yellow
int ledY = 3;           
int brightnessY = 0;    
int fadeAmountY = 5;    

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  
  Serial.begin(9600); //PARA METER A PORTA
} 

// the loop routine runs over and over again forever:
void loop()  { 
  
  do {
  // set the brightness of pin 9:
  analogWrite(ledR, brightnessR);    

  // change the brightness for next time through the loop:
  brightnessR = brightnessR + fadeAmountR;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightnessR == 0 || brightnessR == 255) {
    fadeAmountR = -fadeAmountR ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);
  
  Serial.println("Valor LED Vermelho: ");
  Serial.println(brightnessR);
  } while ( brightnessR != 0);
  //digitalWrite(ledR, LOW);
  
  do {
  //----GREEN
  // set the brightness of pin 9:
  analogWrite(ledG, brightnessG);    

  // change the brightness for next time through the loop:
  brightnessG = brightnessG + fadeAmountG;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightnessG == 0 || brightnessG == 255) {
    fadeAmountG = -fadeAmountG ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);
  
  Serial.println("Valor LED Verde: ");
  Serial.println(brightnessG);

  } while ( brightnessG != 0);

  
  do {
  //----YELLOW
   // set the brightness of pin 9:
  analogWrite(ledY, brightnessY);    

  // change the brightness for next time through the loop:
  brightnessY = brightnessY + fadeAmountY;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightnessY == 0 || brightnessY == 255) {
    fadeAmountY = -fadeAmountY ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);
  
  Serial.println("Valor LED amarelo: ");
  Serial.println(brightnessY);
  } while ( brightnessY != 0);
  
}
