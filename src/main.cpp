#include <Arduino.h>

const int botao = 1;

int contador = 0;
bool contAnterior = LOW;
bool contAtual = LOW;

void setup() {

pinMode(botao,INPUT);
Serial.begin(9600);

}

void loop() {

  contAtual = digitalRead(botao);

  if (contAtual == HIGH && contAnterior == LOW){

    contador = contador + 1;
    Serial.println("apertos:");
    Serial.println (contador);
  }

     contAnterior = contAtual;

}
