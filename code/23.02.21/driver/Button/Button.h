/*
 * Button.h
 *
 * Created: 2023-02-21 오전 11:12:42
 *  Author: rhoblack
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#define F_CPU	16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "../../periph/GPIO/Gpio.h"

enum {PUSHED, RELEASED};
enum {ACT_NONE, ACT_PUSHED, ACT_RELEASED};

typedef struct _button {
	volatile uint8_t *DDR;
	volatile uint8_t *PIN;
	uint8_t pinNum;
	uint8_t prevState;
}button_t;

void Button_init(button_t *btn, volatile uint8_t *DDR, volatile uint8_t *PIN, uint8_t pinNum);
uint8_t Button_getState(button_t *btn);




#endif /* BUTTON_H_ */