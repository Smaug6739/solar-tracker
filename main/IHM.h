/*
* Description : This class is a manager for IHM. It provide useful methods to manage IHM of solar tracker.
*/

#include <Arduino.h>
#include "config.h"
#ifndef IHM_H
#define IHM_H

class IHM {
public:
  unsigned short int charge_led;
  void turnOnChargeLed();
  void turnOffChargeLed();
  IHM(){
    this->charge_led = CHARGE_LED_PIN; // The config of "charge led"
  }
};

#endif
