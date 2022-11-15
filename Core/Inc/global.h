/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: hatru
 */
#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "led_control.h"

extern int status_1;
extern int status_2;
extern int status_3;

extern int time_1;
extern int time_2;

extern int red_time;
extern int green_time;
extern int yellow_time;

#define INIT 			1

#define AUTO_RED 		2
#define AUTO_GREEN 		3
#define AUTO_YELLOW 	4

#define SET_RED 		42
#define SET_YELLOW 		43
#define SET_GREEN 		44

#define AUTO_RED_2 		22
#define AUTO_GREEN_2 	23
#define AUTO_YELLOW_2 	25


#define LED_BLINK 		0.5



#endif /* INC_GLOBAL_H_ */
