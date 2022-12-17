#include "Robot.h"

Robot tractor(9, 8, 6, 4, 2, 5);

void setup() {
  tractor.init();

}

void loop() {
  tractor.analog_forward(0,0);
}
