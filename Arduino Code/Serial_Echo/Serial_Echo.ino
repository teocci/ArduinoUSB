#include <Arduino.h>

int LED1 = 10;

void setup() {
    Serial.begin(9600);
    pinMode(LED1, OUTPUT);
}

void loop() {
    if (Serial.available()) {
        char c = Serial.read();
        Serial.print(c);
        digitalWrite(LED1, HIGH); // Turn on LED1
        delay(200);
        digitalWrite(LED1, LOW); // Turn off LED1
    }
}