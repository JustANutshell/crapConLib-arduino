#include "Arduino.h"
#include "crapConLibArduino.h"
crapConLibArduino::crapConLibArduino(int pinDataIn, void (*function)(uint8_t[],uint8_t) ){
  pinMode(pinDataIn,INPUT);
  pinDataIn=pinDataIn;
  // in trigger function: if(!_onRecieve){return;}
  onRecieve=function;
}