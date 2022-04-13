/*
* Description : This class is a manager for IHM. It provide useful methods to manage IHM of solar tracker.
*/

#include "IHM.h"

// A function that turn on the led of charge of solar tracker
void IHM::turnOnChargeLed(){
  digitalWrite(this->charge_led, true); 
}

// A function that turn off the led of charge of solar tracker
void IHM::turnOffChargeLed(){
  digitalWrite(this->charge_led, false); 
}
