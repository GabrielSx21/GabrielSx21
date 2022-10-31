#include <Otto.h>

#include <Servo.h>

Servo PernaDireita;   
Servo PeDireito; 
Servo PernaEsquerda; 
Servo PeEsquerdo;   

void setup() {
  PernaDireita.attach(2);
  PeDireito.attach(3);
  PernaEsquerda.attach(4);
  PeEsquerdo.attach(5);

  PernaDireita.write(90);
  PeDireito.write(90);
  PernaEsquerda.write(99);
  PeEsquerdo.write(81);
}

void loop() {
 
}
