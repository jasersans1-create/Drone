#include <Arduino.h>

#define STATUS_LED 21

void setup()
{
    pinMode(STATUS_LED, OUTPUT);

    Serial.begin(115200);

    Serial.println();
    Serial.println("================================");
    Serial.println("Drone Flight Controller");
    Serial.println("Board Bring-up Firmware");
    Serial.println("ESP32-S3 Boot Successful");
    Serial.println("================================");
}

void loop()
{
    digitalWrite(STATUS_LED, HIGH);
    delay(500);

    digitalWrite(STATUS_LED, LOW);
    delay(500);
}