//https://www.youtube.com/watch?v=ArvU6pEiQdA&list=PLkjnQ3NFTPnY1eNyLDGi547gkVui1vyn2&index=4

int LED = 3;
int BRILLO;
int POT = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  BRILLO = analogRead(POT) / 4;
  analogWrite(LED,BRILLO);

}
