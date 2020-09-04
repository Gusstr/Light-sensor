#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(A5, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = analogRead(A0);
  if (value < 970) {
    digitalWrite(A5, HIGH);
  }
  else if (value > 970) {
    digitalWrite(A5, LOW);
  }
  delay(10);

}