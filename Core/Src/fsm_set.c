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
			//display
			led1Update(red_time);
			led2Update(status_3-SET_RED+2);
			//CHANGE STATE
			//button1_press
			// CHANGE AUTOMATIC MODE
			if(is_button_pressed(0)==1){
				status_3 = SET_YELLOW;
				setTimer4( LED_BLINK*100);
			}
			// CHANGE AUTOMATIC MODE
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
			// CHANGE AUTOMATIC MODE
			if(is_button_pressed(0)==1){
				status_3 = SET_GREEN;
				setTimer4(LED_BLINK*100);
			}
			// CHANGE AUTOMATIC MODE
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
