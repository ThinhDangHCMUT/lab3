#include <fsm_set.h>

void fsm_set_run(){
	switch(status_3){
		case INIT:
			clearAllLights(0); //turn off 7led_1
			clearAllLights(1); //turn off 7led_2
			status_3 = SET_RED;
			setTimer4(LED_BLINK*100 );
		case SET_RED:
			// TODO:
			blinkRed();
			//INCREASE EVERY PRESSING BUTTON 1 IN RELEASE MODE
			if(is_button_pressed(1) == 1){
				red_time = red_time + 1;
				if(red_time > 99) red_time = 1;
			}
			//DECREASE EVERY HOLDING BUTTON 1 IN 1S
			if(is_button_pressed_1s(1) == 1){
				red_time = red_time - 1;
				if(red_time <= 0) red_time = 99;
			}
			//display
			led1Update(red_time);
			led2Update(status_3-SET_RED+2);
			//CHANGE STATE
			//button1_press
			//change mode
			if(is_button_pressed(0)==1){
				status_3 = SET_YELLOW;
				setTimer4( LED_BLINK*100);
			}
			//button3_press
			if(is_button_pressed(2)==1){
				status_1 = INIT;
				status_2 = INIT;
				status_3 = -14;
			}
			//
			break;
		case SET_YELLOW:
			blinkYellow();
			led1Update(yellow_time);
			led2Update(status_3-SET_RED+2);
			//INCREASE EVERY PRESSING BUTTON 1 IN RELEASE MODE
			if(is_button_pressed(1)==1){
				yellow_time = yellow_time + 1;
				if(yellow_time > 99) yellow_time = 1;
			}
			//DECREASE EVERY HOLDING BUTTON 1 IN 1S
			if(is_button_pressed_1s(1)==1){
				yellow_time = yellow_time - 1;
				if(yellow_time <= 0) yellow_time = 99;
			}

			// CHANGE STATE
			if(is_button_pressed(0)==1){
				status_3 = SET_GREEN;
				setTimer4(LED_BLINK*100);
			}

			if(is_button_pressed(2)==1){
				status_1 = INIT;
				status_2 = INIT;
				status_3 = -14;
			}

			break;

		case SET_GREEN:
			blinkGreen();
			led1Update(green_time);
			led2Update(status_3-SET_RED+2);
			//INCREASE EVERY PRESSING BUTTON 1 IN RELEASE MODE
			if(is_button_pressed(1)==1){
				green_time+=1;
				if(green_time>99) green_time = 1;
			}
			//DECREASE EVERY HOLDING BUTTON 1 IN 1S
			if(is_button_pressed_1s(1)==1){
				green_time = green_time - 1;
				if(green_time<=0) green_time = 99;
			}
			//CHANGE AUTOMATIC MODE
			if(is_button_pressed(0) == 1){
				status_1 = INIT;
				status_2 = INIT;
				status_3 = -14;
			}
			//CHANGE AUTOMATIC MODE
			if(is_button_pressed(2)==1){
				status_1 = INIT;
				status_2 = INIT;
				status_3 = -14;
			}
			break;

		default:
			break;
	}
}
