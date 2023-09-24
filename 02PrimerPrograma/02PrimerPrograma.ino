/*
	Capitulo 3 de Arduino desde cero en Español
	Tercer programa que al presionarse el pulsador enciende LED por 5 segundos y luego
	apaga solo.

	Autor: bitwiseAr  

*/


int PULSADOR = 2; 
int LED=3; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == LOW){ 	// espera infinitamente hasta que se presione el pulsador
 }

digitalWrite(LED, HIGH);		// enciende LED
delay(5000); 				// espera de 5 seg.
digitalWrite(LED, LOW); 		// apaga LED

while(digitalRead(PULSADOR) == HIGH){ 	// espera como funcion antirebote simple
 }

}