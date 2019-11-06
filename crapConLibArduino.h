#ifndef crapConLibArduino_h
#define crapConLibArduino_h
#include "Arduino.h"
class crapConLibArduino{
  public:
    crapConLibArduino(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};
#endif
