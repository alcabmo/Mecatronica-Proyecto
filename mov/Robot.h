#include "Arduino.h"
#ifndef ROBOT_H
#define ROBOT_H


class Robot{
public:
  Robot(int r1_0, int r1_1, int pwm_r1, int r2_0, int r2_1, int pwm_r2);
  void init();
  void digital_stop();
  void digital_forward();
  void digital_backward();
  void analog_forward(int pwm1, int pwm2);
  void analog_stop();
  void analog_backward(int pwm1, int pwm2);
  void turn_right(int pwm);
  void turn_left(int pwm);

private:
  int rueda_izq[2];
  int rueda_der[2];
  int pin_pwm_izq;
  int pin_pwm_der;
};
#endif