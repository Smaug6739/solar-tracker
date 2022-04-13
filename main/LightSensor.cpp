/*
* Description : This class is a manager for light sensor. It provide useful methods to manage light sensor of solar tracker.
*/

#include "LightSensor.h"

// This method will return the optimal position of solar tracker (number between 0 and 180)
unsigned short int LightSensor::optimalOrientation(){
  // Center check
  const short int center = this->getValue();
  // Right check
  this->m1->increasePos(5);
  const short int right = this->getValue();
  // Left check
  this->m1->decreasePos(10);
  const short int left = this->getValue();

  this->m1->increasePos(5);
  
  if(center > left && center > right) return 0;
  if(left > center && left > right) return 5;
  if(right > center && right > left) return -5;
  else return center;
}
int LightSensor::getValue(){
  return analogRead(this->pin);  
}
