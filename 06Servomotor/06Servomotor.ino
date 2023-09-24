//https://www.youtube.com/watch?v=6bPVZg17vKc&list=PLkjnQ3NFTPnY1eNyLDGi547gkVui1vyn2&index=6

#include <Servo.h>

Servo servo1;

int PINSERVO = 2;
int PULSOMIN = 400;
int PULSOMAX = 1350;
int VALORPOT;
int ANGULO;
int POT = 0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  VALORPOT = analogRead(POT);

  ANGULO = map(VALORPOT, 0, 1023, 0, 180);
  servo1.write(ANGULO);
  delay(20);
}
