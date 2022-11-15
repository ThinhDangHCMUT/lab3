#include <fsm_auto.h>

void fsm_auto_run(){
	switch(status_1){
		case INIT:
			clearAllLights(0);
			status_1 = AUTO_RED;
			setTimer1(red_time*100); //setTimer1(500)
			time_1 = red_time;
			break;

		case AUTO_RED:
			//TODO
			red(0);  //turn off the red light
			switchLed(0, time_1); //display time cosuming of the red light
			countDownTime();
			if(timer1_flag == 1){ //when timer1_flag is on the red light is over and the status turn into green
				status_1 = AUTO_GREEN;
				setTimer1(green_time*100);  // setTimer for green light
				time_1 = green_time;
			}
			//CHANGE TO INCREASING MODE IF FIRST BUTTON IS PRESSED
			if(is_button_pressed(0) == 1){
				status_1 = -14;
				status_2 = -14;
				status_3 = INIT;
			}

			break;
			//similar to AUTO_RED
		case AUTO_GREEN:
			//TODO
			//countDownTime();
			green(0);
			switchLed(0, time_1);
			countDownTime();
			if(timer1_flag == 1){
				status_1 = AUTO_YELLOW;
				setTimer1(yellow_time*100);
				time_1 = yellow_time;
			}
			//CHANGE TO INCREASING MODE IF FIRST BUTTON IS PRESSED
			if(is_button_pressed(0) == 1){
				status_1 = -14;
				status_2 = -14;
				status_3 = INIT;
			}

			break;
			//similar to AUTO_RED
		case AUTO_YELLOW:
			//countDownTime();
			yellow(0);
			switchLed(0, time_1);
			countDownTime();
			if(timer1_flag == 1){
				status_1 = AUTO_RED;
				setTimer1(red_time*100);
				time_1 = red_time;
			}
			//CHANGE TO INCREASING MODE IF FIRST BUTTON IS PRESSED
			if(is_button_pressed(0) == 1){
				status_1 = -14;
				status_2 = -14;
				status_3 = INIT;
			}

			break;

		default:
			break;
	}

}
