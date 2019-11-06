#include "Arduino.h"
#include "crapConLibArduino.h"
crapConLibArduino::crapConLibArduino(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
}
void crapConLibArduino::dot(){
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}
void crapConLibArduino::dash(){
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
