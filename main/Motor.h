/*
* Description : This class is a manager for motor. It provide useful methods to manage motors of solar tracker.
*/
#include <Arduino.h>
#include <Servo.h>
#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
  unsigned short int curent_pos;
  void initialize(short int id);
  void goTo(short int pos);
  int increasePos(short int increase);
  int decreasePos(short int decrease);
  Motor(){
    servo = Servo();
  };
private:
  Servo servo;
};

#endif
