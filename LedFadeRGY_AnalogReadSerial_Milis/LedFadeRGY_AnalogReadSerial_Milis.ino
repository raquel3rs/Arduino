unsigned long time;

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
  // declare pin to be an output:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  
  
  Serial.begin(9600); //PARA METER A PORTA
} 

// the loop routine runs over and over again forever:
void loop()  { 
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("Valor Sensor: ");
  Serial.println(sensorValue);
    
    if(sensorValue >= 200) {
      
      //RED
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
      
      Serial.print("Valor LED Vermelho: ");
      Serial.println(brightnessR);
      } while ( brightnessR != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      
      //NUMBER OF MILLISECONDS SINCE THE PROGRAM STARDED
      Serial.print("---Time: ");
      //prints time since program started
      time = millis();
      Serial.println(time);
      
      //----GREEN
      do {
      analogWrite(ledG, brightnessG);    
      brightnessG = brightnessG + fadeAmountG;
      if (brightnessG == 0 || brightnessG == 255) {
        fadeAmountG = -fadeAmountG ; 
      }        
      delay(30);
      Serial.print("Valor LED Verde: ");
      Serial.println(brightnessG);
    
      } while ( brightnessG != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      Serial.print("---Time: ");
      //prints time since program started
      time = millis();
      Serial.println(time);
      
      
      //----YELLOW
      do {
      analogWrite(ledY, brightnessY);    
      brightnessY = brightnessY + fadeAmountY;
      if (brightnessY == 0 || brightnessY == 255) {
        fadeAmountY = -fadeAmountY ; 
      }        
      delay(30);
      Serial.print("Valor LED amarelo: ");
      Serial.println(brightnessY);
      } while ( brightnessY != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      Serial.print("---Time: ");
      //prints time since program started
      time = millis();
      Serial.println(time);
   
 
  } else { 
      
    
      //----YELLOW
      do {
      analogWrite(ledY, brightnessY);    
      brightnessY = brightnessY + fadeAmountY;
      if (brightnessY == 0 || brightnessY == 255) {
        fadeAmountY = -fadeAmountY ; 
      }     
      delay(30);
      
      Serial.print("Valor LED amarelo: ");
      Serial.println(brightnessY);
      } while ( brightnessY != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      
      Serial.print("---Time: ");
      time = millis();
      Serial.println(time);
      
      
      //----GREEN
      do {
      analogWrite(ledG, brightnessG);    
      brightnessG = brightnessG + fadeAmountG;
      if (brightnessG == 0 || brightnessG == 255) {
        fadeAmountG = -fadeAmountG ; 
      }     
      delay(30);
      Serial.print("Valor LED Verde: ");
      Serial.println(brightnessG);
    
      } while ( brightnessG != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      
      Serial.print("---Time: ");
      time = millis();
      Serial.println(time);
      
      
      //RED
      do {
      analogWrite(ledR, brightnessR);    
      brightnessR = brightnessR + fadeAmountR;
      if (brightnessR == 0 || brightnessR == 255) {
        fadeAmountR = -fadeAmountR ; 
      }        
      delay(30);
      Serial.print("Valor LED Vermelho: ");
      Serial.println(brightnessR);
      } while ( brightnessR != 0);
      
      Serial.print("---Valor Sensor: ");
      Serial.println(sensorValue);
      
      Serial.print("---Time: ");
      //prints time since program started
      time = millis();
      Serial.println(time);

    }
}
