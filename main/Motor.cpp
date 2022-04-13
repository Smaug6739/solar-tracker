/*
* Description : This class is a manager for motor. It provide useful methods to manage motors of solar tracker.
*/

#include "Motor.h"

//Motor::Motor(short int id){
//  servo = Servo();
//  servo.attach(id);
//};
void Motor::initialize(short int id){
  servo.attach(id);
};

// This function will set a new position for the motor

void Motor::goTo(short int pos){
  //assert(pos > 180 || pos < 0, "Bad position.");
  if(pos > 180 || pos < 0) return;
  if(pos == this->curent_pos) return;
  servo.write(pos);
  this->curent_pos = pos;
};
int Motor::increasePos(short int increase){
  if(this->curent_pos + increase > 180) return 1;
  this->servo.write(this->curent_pos + increase);
  this->curent_pos = this->curent_pos + increase;
  return 0;
};
int Motor::decreasePos(short int increase){
  if(this->curent_pos - increase > 0) return 1;
  servo.write(this->curent_pos - increase);
  this->curent_pos = this->curent_pos - increase;
  return 0;
};



/*
if(center > this->max_value){
    this->max_value = center;
    this->m1->increasePos(5);
  }
  else if(right > this->max_value){
    this->max_value = right;
    this->m1->increasePos(10);
  }
  else if(left > this->max_value){
    this->max_value = left;
  }
  else {
     // Center
      if(center > right && center > left){
        if(center > this->max_value) this->max_value = center;
        this->m1->increasePos(5);
      }
      // Right
      else if(right > center && right > left){
        if(right > this->max_value) this->max_value = right;
        this->m1->increasePos(10);
      }
      // Left
      else if(left > center && left > right){
        if(left > this->max_value) this->max_value = left;
      }
  }
*/
