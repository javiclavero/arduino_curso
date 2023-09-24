#include <SPI.h>
#include <LoRa.h>

// Definir los pines
const int csPin = 53;     // LoRa radio chip select
const int resetPin = 19;  // LoRa radio reset
const int irqPin = 18;    // Cambia para un pin interruptible

void setup() {
  // Iniciar la comunicación serie
  Serial.begin(9600);

  // Setup LoRa transceiver module
  LoRa.setPins(csPin, resetPin, irqPin);
  
  // Iniciar LoRa
  if (!LoRa.begin(433E6)) {  // Frecuencia de 433MHz, cambia si es necesario
    Serial.println("Starting LoRa failed!");
    while (1);
  }

  // Configuración opcional para configurar la potencia de transmisión, rango, etc.
  // LoRa.setTxPower(20);
  // LoRa.setSpreadingFactor(10);
  // LoRa.setSignalBandwidth(62.5E3);
  
  Serial.println("LoRa init succeeded.");
}

void loop() {
  Serial.println("Sending message...");
  
  // Comenzar paquete
  LoRa.beginPacket();
  // Escribir mensaje
  LoRa.print("HOLA");
  // Finalizar paquete y enviar
  LoRa.endPacket();
  
  // Espera 1 segundo
  delay(1000);
}