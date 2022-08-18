/*
autores:
Michel silva

data de criação: 18/08/2022
*/

#include <Arduino.h>

// verificando a precisão do clock do arduino
// 2^(clock_divisor) = clock_freq
// 2^10 = 1024 (variando de 0 a 1023)
// se usar 5v (0v = 0) e 5v (5v = 1023)
// 5/1023 = 0.0048828125 ~ 0.005 ~ 5mV

// variaveis globais
int pinPorta = A0; // porta do pino analógico A0
int pinLed = 13; // porta do pino digital 13
int valorAnalogico = 0; // valor lido do pino analógico
int valorDigital = 0; // valor lido do pino digital

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // inicializando a serial com 9600 bps
  pinMode(pinPorta, INPUT); // configurando o pino analógico como entrada
  pinMode(pinLed, OUTPUT); // configurando o pino digital como saída
}

void loop() {
  // put your main code here, to run repeatedly:
  valorAnalogico = analogRead(pinPorta); // lendo o valor do pino analógico e armazenando na variavel valorAnalogico
  valorDigital = digitalRead(pinLed); // lendo o valor do pino digital e armazenando na variavel valorDigital
  Serial.print("Valor lido do pino analógico: "); // imprimindo na serial o valor lido do pino analógico
  Serial.println(valorAnalogico); // imprimindo na serial o valor lido do pino analógico
  Serial.print("Valor lido do pino digital: "); // imprimindo na serial o valor lido do pino digital
  Serial.println(valorDigital); // imprimindo na serial o valor lido do pino digital
  delay(1000); // esperando 1 segundo

  if (valorAnalogico > 500) { // se o valor lido do pino analógico for maior que 500
    digitalWrite(pinLed, HIGH); // acende o led
  } else { // senão
    digitalWrite(pinLed, LOW); // apaga o led
  }

}