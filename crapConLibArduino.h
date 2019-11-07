#ifndef crapConLibArduino_h
#define crapConLibArduino_h
#include "Arduino.h"
class crapConLibArduino{
  public:
    crapConLibArduino(int, void (*)(uint8_t[],uint8_t) );
  private:
    int pinDataIn;
	void (*onRecieve)(uint8_t[],uint8_t);
};
#endif
