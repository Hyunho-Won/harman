/*
 * Led.h
 *
 * Created: 2023-02-21 오전 11:52:36
 *  Author: rhoblack
 */ 


#ifndef LED_H_
#define LED_H_

#include <avr/io.h>
#include "../../periph/GPIO/Gpio.h"

void Led_initPort(volatile uint8_t *DDR);
void Led_writePort(volatile uint8_t *PORT, uint8_t data);
void Led_allOn(volatile uint8_t *PORT);
void Led_allOff(volatile uint8_t *PORT);


#endif /* LED_H_ */