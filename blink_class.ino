#include "Led.h"

Led statusLed(13);
Led statusLed2(7);

void setup() {}

void loop() {
    //int randel= random(25,255);
    randomSeed(analogRead(0));
    statusLed.on();
    delay(random(25,255));
    statusLed2.off();
    delay(random(25,255));
    statusLed.off();
    randomSeed(analogRead(0));
    delay(random(20, 200));
    statusLed2.on();
    delay(random(25,255));
}
