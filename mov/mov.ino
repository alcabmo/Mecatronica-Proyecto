#include "Robot.h"
#include <SoftwareSerial.h>

Robot tractor(9, 8, 6, 4, 2, 5);
SoftwareSerial BT(11,10);
int v;
String S = "";

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  tractor.init();
}

void loop() {
  if (BT.available())
  {
    char A =  BT.read();
    switch (A) {
      case 'F': //palantes
        Serial.println("Forward");
        tractor.analog_forward(255,255);
        break;
      case 'S': //paraaa
        Serial.println("Stop");
        tractor.analog_stop();
        break;
      case 'L': //gira pa izquierda
        Serial.println("Left");
        tractor.turn_left(255);
        break;
      case 'R': //gira pa derecha
        Serial.println("Right");
        tractor.turn_right(255);
        break;
      case 'B': //pa tras
        Serial.println("Backward");
        tractor.analog_backward(255,255);
        break;
      case 'C': //slider rueda izquierda
        A = BT.read();
        while (A != '/')
        {
          if (isDigit(A) or A == '.')
            S += A;
          A = BT.read();
          delay(50);
        }
        Serial.println(S);
        S = "";
        break;
      case 'H': //silder rueda derecha
        A = BT.read();
        while (A != '/')
        {
          if (isDigit(A) or A == '.')
            S += A;
          A = BT.read();
          delay(50);
        }
        Serial.println(S);
        S = "";
        break;
    }
  }
}