#include "button.h"

#define NO_OF_BUTTONS						3
#define DURATION_FOR_AUTO_INCREASING		100
#define PRESSED_STATE						GPIO_PIN_RESET
#define NORMAL_STATE						GPIO_PIN_SET

static GPIO_PinState prev_Key[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

static GPIO_PinState keyReg1[NO_OF_BUTTONS];
static GPIO_PinState keyReg2[NO_OF_BUTTONS];
static GPIO_PinState keyReg0[NO_OF_BUTTONS];


int flagForButtonPressed[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int flagForButtonPressed1s[NO_OF_BUTTONS]= {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int counterForButtonPressed1s[NO_OF_BUTTONS]= {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};


GPIO_PinState isKeyInput(int index){
	switch(index){
	case 0:
		return HAL_GPIO_ReadPin(GPIOC,BUTTON_1_Pin);
	default:
		return NORMAL_STATE;
	}
}

void subKeyProcess1(int index){
	flagForButtonPressed[index] = 1;
}

void subKeyProcess2(int index){
	flagForButtonPressed1s[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < NO_OF_BUTTONS; ++i){
		keyReg2[i] = keyReg1[i];
		keyReg1[i] = keyReg0[i];
		keyReg0[i] = isKeyInput(i);

		if(keyReg2[i] == keyReg1[i] &&
		   keyReg0[i] == keyReg1[i])
		{
			if(prev_Key[i] != keyReg2[i]){   //press_release
				prev_Key[i] = keyReg2[i];
				if(keyReg2[i] == PRESSED_STATE){
					subKeyProcess1(i);
					counterForButtonPressed1s[i] = DURATION_FOR_AUTO_INCREASING;
				}
			}else{
				counterForButtonPressed1s[i]--;
				if(counterForButtonPressed1s[i] <= 0){
					if(keyReg2[i] == PRESSED_STATE){
						subKeyProcess2(i);
					}
				counterForButtonPressed1s[i] = DURATION_FOR_AUTO_INCREASING;
				}
			}
		}
	}
}
