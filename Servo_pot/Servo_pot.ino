// inclusão da biblioteca
#include "Servo.h"

int pot = A0; // potenciômetro
Servo servo;  // servo

void setup() {
  pinMode(pot, INPUT); //define o pino do petenciometro como entrada
  servo.attach(6);     //encaixa o servo no pino 6
}

void loop() {
  //pega o resultado da saida analogica do potenciometro e divide por 4 para que o servo consiga interpretar
  int resultado = analogRead(pot) / 4; 
  
  //gira o servo de acordo com o valor gerado no resultado, ou seja, de acordo com o potenciometro.
  servo.write(resultado);
  delay(15); //espera o servo chegar na posição desejada
}
