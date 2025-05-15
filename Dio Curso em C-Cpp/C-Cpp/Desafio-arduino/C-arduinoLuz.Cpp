#include <Arduino.h>

// Pino onde o LDR (sensor de luz) está conectado
const int ldrPin = A0;      

// Pino onde o LED (simulando uma lâmpada) está conectado
const int ledPin = 13;      

// Simulador de hora atual (substituir por RTC em uma versão real)
int horaAtual = 18;         

// Variável que armazenará o valor lido do LDR (0 - 1023)
int valorLDR = 0;

void setup() {
  // Define o LED como saída (lâmpada controlada)
  pinMode(ledPin, OUTPUT);

  // Inicializa a comunicação Serial para depuração
  Serial.begin(9600);
}

void loop() {
  // Leitura do valor de luminosidade do LDR (sensor de luz)
  valorLDR = analogRead(ldrPin);

  // Impressão dos valores no monitor serial
  Serial.print("Hora atual simulada: ");
  Serial.println(horaAtual); // Hora atual simulada (substituir por RTC em uma versão real)

  Serial.print("Valor da luz ambiente (LDR): ");
  Serial.println(valorLDR); // Valor entre 0 e 1023

  if (horaAtual >= 18 && valorLDR < 500) {
    digitalWrite(ledPin, HIGH);  // Liga a lâmpada (LED)
    Serial.println("Ambiente escuro após as 18h - Lâmpada LIGADA!");
  } else {
    digitalWrite(ledPin, LOW);   // Desliga a lâmpada (LED)
    Serial.println("Lâmpada DESLIGADA.");
  }

  // Espera 2 segundos antes de repetir a leitura (controle de frequência)
  delay(2000);
}
