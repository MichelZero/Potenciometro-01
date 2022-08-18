/*
autores:
Michel silva

data de criação: 18/08/2022
*/

#include <Arduino.h>

// imprimindo na serial 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // inicializando a serial com 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Valor lido do pino analógico: "); // imprimindo na serial o valor lido do pino analógico
  delay(1000); // esperando 1 segundo
  // #### 1.1 ####
  //Serial.println("quebrando linha") 

  // #### 1.2 ####
  // adicionando uma quebra de linha com o caractere \n
  Serial.println("\nquebrando linha");


}