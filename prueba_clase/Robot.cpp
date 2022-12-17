#include "Arduino.h"
#include "Robot.h"

Robot::Robot(int r1_0, int r1_1, int pwm_r1, int r2_0, int r2_1, int pwm_r2)
{
    rueda_izq[0] = r1_0;
    rueda_izq[1] = r1_1;
    pin_pwm_izq = pwm_r1;
    rueda_der[0] = r2_0;
    rueda_der[1] = r2_1;
    pin_pwm_der = pwm_r2;
}

void Robot::init()
{
    pinMode(rueda_izq[0], OUTPUT);
    pinMode(rueda_izq[1], OUTPUT);
    pinMode(pin_pwm_izq, OUTPUT);
    pinMode(rueda_der[0], OUTPUT);
    pinMode(rueda_der[1], OUTPUT);
    pinMode(pin_pwm_der, OUTPUT);
}

void Robot::digital_stop()
{
    digitalWrite(rueda_izq[0], LOW);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], LOW);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, 0);
    analogWrite(pin_pwm_der, 0);
}

void Robot::digital_forward()
{
    digitalWrite(rueda_izq[0], HIGH);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], HIGH);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, 255);
    analogWrite(pin_pwm_der, 255);
}

void Robot::digital_backward()
{
    digitalWrite(rueda_izq[0], LOW);
    digitalWrite(rueda_izq[1], HIGH);
    digitalWrite(rueda_der[0], LOW);
    digitalWrite(rueda_der[1], HIGH);
    analogWrite(pin_pwm_izq, 255);
    analogWrite(pin_pwm_der, 255);
}

void Robot::analog_forward(int pwm1, int pwm2)
{
    digitalWrite(rueda_izq[0], HIGH);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], HIGH);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, pwm1);
    analogWrite(pin_pwm_der, pwm2);
}

void Robot::analog_stop()
{
    digitalWrite(rueda_izq[0], HIGH);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], HIGH);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, 0);
    analogWrite(pin_pwm_der, 0);
}

void Robot::analog_backward(int pwm1, int pwm2)
{
    digitalWrite(rueda_izq[0], LOW);
    digitalWrite(rueda_izq[1], HIGH);
    digitalWrite(rueda_der[0], LOW);
    digitalWrite(rueda_der[1], HIGH);
    analogWrite(pin_pwm_izq, pwm1);
    analogWrite(pin_pwm_der, pwm2);
}

void Robot::turn_right(int pwm)
{
    digitalWrite(rueda_izq[0], HIGH);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], HIGH);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, 0);
    analogWrite(pin_pwm_der, pwm);
}

void Robot::turn_left(int pwm)
{
    digitalWrite(rueda_izq[0], HIGH);
    digitalWrite(rueda_izq[1], LOW);
    digitalWrite(rueda_der[0], HIGH);
    digitalWrite(rueda_der[1], LOW);
    analogWrite(pin_pwm_izq, pwm);
    analogWrite(pin_pwm_der, 0);
}