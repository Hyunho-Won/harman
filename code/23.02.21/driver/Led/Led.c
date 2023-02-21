/*
 * Led.c
 *
 * Created: 2023-02-21 오전 11:52:26
 *  Author: rhoblack
 */ 
#include "Led.h"

void Led_initPort(volatile uint8_t *DDR)
{
	Gpio_initPort(DDR, OUTPUT);
}

void Led_writePort(volatile uint8_t *PORT, uint8_t data)
{
	Gpio_writePort(PORT, data);
}

void Led_allOn(volatile uint8_t *PORT)
{
	Gpio_writePort(PORT, 0xff);
}

void Led_allOff(volatile uint8_t *PORT)
{
	Gpio_writePort(PORT, 0x00);
}