#include <Arduino.h>

int RPWM=3;
int LPWM=4;
int R_EN=5;
int L_EN=6;

void setup() {
  pinMode(RPWM,OUTPUT);
  pinMode(LPWM,OUTPUT);
  pinMode(R_EN,OUTPUT);
  pinMode(L_EN,OUTPUT);
  digitalWrite(R_EN,HIGH);
  digitalWrite(L_EN,HIGH);
}

void loop() {
//forward
  analogWrite(LPWM,255);
  analogWrite(RPWM,0);
  delay(1000);

//stop
  analogWrite(LPWM,0);
  analogWrite(RPWM,0);
delay(1000);

//reverse
  analogWrite(LPWM,0);
  analogWrite(RPWM,255);
  delay(1000);
//stop
  analogWrite(LPWM,0);
  analogWrite(RPWM,0);
  delay(1000);
}
