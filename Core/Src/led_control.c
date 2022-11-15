#include "led_control.h"

void red(int input){
	switch(input){
		case 0:
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
			break;
		default:
			break;
		}
}

void yellow(int input){
	switch(input){
		case 0:
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			break;
		default:
			break;
		}
}

void green(int input){
	switch(input){
		case 0:
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			break;
		default:
			break;
		}
}

void toggleRed(int index){
	switch(index){
	case 0:
		HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		break;
	case 1:
		HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		break;
	default:
		break;
	}
}

void toggleGreen(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		break;
	default:
		break;
	}
}

void toggleYellow(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
		break;
	case 1:
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
		break;
	default:
		break;
	}
}


void led1Update(int num){
	num=num%10;
	if(num == 0){
			HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 1);
		}
		if(num == 1){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 1);
			}
		if(num == 2){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 3){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 4){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 5){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 6){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 7){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 1);
			}
		if(num == 8){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 9){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 0);
			}
		if(num == 10){
				HAL_GPIO_WritePin(GPIOB, LED1_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_3_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED1_7_Pin, 1);
		}
}

void led2Update(int num){
	num=num%10;
		if(num == 0){
			HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 1);
		}
		if(num == 1){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 1);
			}
		if(num == 2){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 3){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 4){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 5){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 6){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 7){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 1);
			}
		if(num == 8){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 9){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 0);
			}
		if(num == 10){
				HAL_GPIO_WritePin(GPIOB, LED2_1_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_2_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_3_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_4_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_5_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_6_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED2_7_Pin, 1);
		}
}

void switchLed(int index, int num){
	switch(index){
	case 0:
		led1Update(num);
		break;
	case 1:
		led2Update(num);
		break;
	default:
		break;
	}
}

void clearAllLights(int index){
	switchLed(index,10);
}

void countDownTime(){
	if(timer3_flag == 1){
		setTimer3(100);
		time_1 = time_1 - 1;
		time_2 = time_2 - 1;
	}
}

void blinkRed(){
	if(timer4_flag == 1){
		setTimer4(LED_BLINK*100);
		toggleRed(0);
		toggleRed(1);
	}
}

void blinkGreen(){
	if(timer4_flag == 1){
		setTimer4(LED_BLINK*100);
		toggleGreen(0);
		toggleGreen(1);
	}
}

void blinkYellow(){
	if(timer4_flag == 1){
		setTimer4(LED_BLINK*100);
		toggleYellow(0);
		toggleYellow(1);
	}
}
