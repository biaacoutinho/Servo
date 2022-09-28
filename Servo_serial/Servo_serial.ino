#include "Servo.h"

Servo servo;  // servo

void setup() {
  servo.attach(6);     //encaixa o servo no pino 6
  Serial.begin(9600);
  Serial.write("Digite as opções: '1', '2', '3' ou '4'");
}

void loop() {
  // put your main code here, to run repeatedly:
  char opcao = Serial.read();
  switch (opcao)
  {
    case '1': servo.write(200); break;
    case '2': servo.write(47); break;
    case '3': servo.write(85); break;
    case '4': servo.write(0); break;
  }
}
