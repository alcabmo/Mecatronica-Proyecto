#include <SoftwareSerial.h>

SoftwareSerial BT(11,10);
int v;
String S = "";

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BT.available())
  {
    char A =  BT.read();
    switch (A) {
      case 'F': //palantes
        Serial.println("Forward");
        break;
      case 'S': //paraaa
        Serial.println("Stop");
        break;
      case 'L': //gira pa izquierda
        Serial.println("Left");
        break;
      case 'R': //gira pa derecha
        Serial.println("Right");
        break;
      case 'B': //pa tras
        Serial.println("Backward");
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
