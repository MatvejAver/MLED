/*Библиотека для работы со светодиодом от Матвея (v.1.0.0)
Библиотеку можно использовать и изменять.
(C) 2025 Матвей */

#ifndef MLED_h
#define MLED_h
#include <Arduino.h>
#define STANDARD_PIN 13

class MLED{
    public:
        LED(uint8_t pin = STANDARD_PIN);
        void blink(bool light);
        void blinkAuto();
        void analogBlink(uint8_t light);
        void setPin(uint8_t pin);
    private:
        uint8_t _pin;
        bool _light;
};

#endif

