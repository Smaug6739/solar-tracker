/*
* Description : The pins of components of solar tracker
*/

#include <Arduino.h>

/*
* Wiring: 
*   - Light sensor : A1
*   - Switch : D3
*   - LED : D8
*   - Motor (servo motor) : D6
*/

#ifndef CONFIG_H
#define CONFIG_H

#define MOTOR_PIN (6)
#define SENSOR_PIN (1)
#define SWITCH_PIN (3)
#define CHARGE_LED_PIN (8) // TODO: Implement IHM

#endif
