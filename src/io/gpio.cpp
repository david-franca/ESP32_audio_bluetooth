
#include <Arduino.h>

void setup()
{
    pinMode(32,OUTPUT);
    Serial.begin(57600);
    Serial.println("inicio......");
}

/*********************************************************/
uint8_t count = 0;
uint32_t printTimer = millis();

uint32_t adcTimer = 0;
bool doExtADC = false;
bool doSine = false;

/*********************************************************/
uint32_t testCounter = 0;

void loop()
{
    Serial.println("acende");
    digitalWrite(32, true);
    delay(1000);

    Serial.println("apaga");
    digitalWrite(32, false);
    delay(1000);
}

/*********************************************************/
