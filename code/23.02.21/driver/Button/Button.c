/*
 * Button.c
 *
 * Created: 2023-02-21 오전 11:12:30
 *  Author: rhoblack
 */ 
#include "Button.h"

void Button_init(button_t *btn, volatile uint8_t *DDR, volatile uint8_t *PIN, uint8_t pinNum)
{
	btn->DDR = DDR;
	btn->PIN = PIN;
	btn->pinNum = pinNum;
	btn->prevState = RELEASED;
	Gpio_initPin(btn->DDR, btn->pinNum, INPUT);
}

uint8_t Button_getState(button_t *btn)
{
	uint8_t curState = Gpio_readPin(btn->PIN, btn->pinNum);
	if ( (curState == PUSHED) && (btn->prevState == RELEASED) ) {
		_delay_ms(10); // debounce code
		btn->prevState = PUSHED;
		return ACT_PUSHED;
	}
	else if ( (curState != PUSHED) && (btn->prevState == PUSHED) ){
		_delay_ms(10); // debounce code
		btn->prevState = RELEASED;
		return ACT_RELEASED;
	}
	return ACT_NONE;
}