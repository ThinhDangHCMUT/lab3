#include <fsm_auto2.h>

void fsm_auto_run_2(){
	switch(status_2){

		case INIT:
			clearAllLights(1);
			status_2 = AUTO_GREEN_2;
			setTimer2(green_time*100);
			time_2 = green_time;
			break;

		case AUTO_RED_2:
			//countDownTime();
			red(1);
			switchLed(1, time_2);
			countDownTime();
			if(timer2_flag == 1){
				status_2 = AUTO_GREEN_2;
				setTimer2(green_time*100);
				time_2 = green_time;
			}

			if(is_button_pressed(0) == 1){
				status_1 = -14;
				status_2 = -14;
				status_3 = INIT;
			}

			break;

		case AUTO_GREEN_2:
			//countDownTime();
			green(1);
			switchLed(1, time_2);
			countDownTime();
			if(timer2_flag == 1){
				status_2 = AUTO_YELLOW_2;
				setTimer2(yellow_time*100);
				time_2 = yellow_time;
			}

			if(is_button_pressed(0) == 1){
				status_1 = -14;
				status_2 = -14;
				status_3 = INIT;
			}

			break;

		case AUTO_YELLOW_2:
			//countDownTime();
			yellow(1);
			switchLed(1, time_2);
			countDownTime();
			if(timer2_flag == 1){
				status_2 = AUTO_RED_2;
				setTimer2(red_time*100);
				time_2 = red_time;
			}

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
