#include <Arduino.h>

const int botao = 3;
const int led = 8;
const int led2 = 9;

int contador = 0; 

void interromper () {

  digitalWrite (led,LOW);
  delay(2000);
  contador = contador + 1;
  Serial.print("apertos: ");
  Serial.println(contador);

}

void setup() {

pinMode(botao,INPUT);
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);

Serial.begin(9600);

attachInterrupt(digitalPinToInterrupt(botao), interromper, RISING);

}

void loop() {

  digitalWrite (led, HIGH);
  delay(1000);
  digitalWrite (led, LOW);
  delay(1000);

}
