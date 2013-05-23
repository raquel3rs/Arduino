#include <EEPROM.h>

int a = 0, i;
int value;

int led = 3;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is

void setup() {
  
  Serial.begin(9600);
  EEPROM.write(0,0); //nao se pode por o write num loop
  EEPROM.write(1,31);
  EEPROM.write(2,62);
  EEPROM.write(3,93);
  EEPROM.write(4,124);
  EEPROM.write(5,155);
  EEPROM.write(6,186);
  EEPROM.write(7,217);
  EEPROM.write(8,248);
  
  pinMode(led,OUTPUT);
}
  
void loop() {
  value = EEPROM.read(a);
  
  analogWrite(led, value);
  
  float tensao = 5.0 * value / 255;
  
  Serial.print("Address: ");
  Serial.print(a);
  Serial.print("\t");
  Serial.print("Value: ");
  Serial.print(value);
  Serial.print("\t");
  Serial.print("Tensao: ");
  Serial.print(tensao);
  Serial.println();
  
  a = a + 1;
  
  if ( a == 9) {
    a = 0;
  }
  
  delay(100);
  
}
