/*
* =======SOLAR-TRACKER=======
* Created at : 04/12
* Description: This programm read value of a light sensor and change the position of a motor depending of the value of light sensor.
* Author: Raphaël Veauville (https://github.com/Smaug6739)
* Version: 0.4.0
* Wiring: 
*   - Light sensor : A1
*   - Switch : D3
*   - LED : D8
*   - Motor (servo motor) : D6
*/
#include "config.h"
#include "Motor.h"
#include "LightSensor.h"
#include "IHM.h"

Motor m1 = Motor(); // Call constructor of Motor class
LightSensor s1 = LightSensor(MOTOR_PIN, &m1); // Call constructor of LightSensor class


void setup() {
  pinMode(3, INPUT);
  m1.initialize(MOTOR_PIN); // Attach to pin 6
  m1.goTo(90); // Default position (TODO: Set good pos for est orientation)
}


void loop() {
  if(!digitalRead(SWITCH_PIN)) return;
  const short int optimal = s1.optimalOrientation(); // Get the optimal orientation with the light sensor
  if(optimal > 0) m1.increasePos(optimal);
  if(optimal < 0) m1.decreasePos(optimal);
  // m1.goTo(optimal); OLD
  delay(300000); // 5 mins
}
