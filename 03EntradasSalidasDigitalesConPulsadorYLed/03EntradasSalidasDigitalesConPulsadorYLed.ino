//https://www.youtube.com/watch?v=BWhup75svIk&list=PLkjnQ3NFTPnY1eNyLDGi547gkVui1vyn2&index=3


int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(PULSADOR,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(PULSADOR) == LOW)
  {
 
  }
  ESTADO = digitalRead(LED);
  digitalWrite(LED, !ESTADO);
    while (digitalRead(PULSADOR) == HIGH)
  {
 
  }
}
