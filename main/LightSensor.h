/*
* Description : This class is a manager for light sensor. It provide useful methods to manage light sensor of solar tracker.
*/

#include <Arduino.h>
#include "Motor.h"
#ifndef LIGHT_SENSOR_H
#define LIGHT_SENSOR_H

class LightSensor {
public:
  unsigned short int max_val;
  unsigned short int pin;
  unsigned short int optimalOrientation();
  int getValue();
  LightSensor(unsigned short int id, Motor* m){
    this->pin = id;
    this->m1 = m;
  }
private:
  Motor* m1;
};

#endif
