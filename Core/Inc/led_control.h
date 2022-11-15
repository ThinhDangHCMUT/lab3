#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"
#include "global.h"

void setRed(int index);
void setGreen(int index);
void setYellow(int index);

void toggleRed(int index);
void toggleGreen(int index);
void toggleYellow(int index);

void clearAllLights(int index);

void led1Update(int num);
void led2Update(int num);

void switchLed(int index, int num);
void clearAllLED(int index);

void countDownTime();

void blinkRed();
void blinkGreen();
void blinkYellow();

#endif /* INC_LED_H_ */
