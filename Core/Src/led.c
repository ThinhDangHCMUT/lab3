/*
 * led.c
 *
 *  Created on: Oct 28, 2022
 *      Author: phucd
 */


#include "led.h"
#include "button.h"
#include "global.h"


void toggleRed(){
	HAL_GPIO_TogglePin(GPIOA, RED1_Pin);
}
void toggleGreen(){
	HAL_GPIO_TogglePin(GPIOA, GREEN1_Pin);
}
void toggleYellow(){
	HAL_GPIO_TogglePin(GPIOA, YELLOW1_Pin);
}

void clearLight(){
	HAL_GPIO_WritePin(GPIOA, RED1_Pin,SET);
	HAL_GPIO_WritePin(GPIOA, YELLOW1_Pin,SET);
	HAL_GPIO_WritePin(GPIOA, GREEN1_Pin,SET);
}

void displayNum(){
	switch(counter%10){
	case 0:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB,LED1_1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,LED1_7_Pin, SET);
		break;
	}
}


void clearLED(){
	displayNum(10);
}


