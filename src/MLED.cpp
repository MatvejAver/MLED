#include "MLED.h"
#include <Arduino.h>

MLED::MLED(uint8_t pin){
    _pin = pin;
}

MLED::blink(bool light){
    digitalWrite(_pin,light);
    _light = light;
}

MLED::blinkAuto(){
    digitalWrite(_pin,!_light);
    _light = !_light;
}

MLED::analogBlink(uint8_t light){
    analogWrite(_pin,light);
}

MLED::setPin(uint8_t pin){
    _pin = pin;
}
