/*
 * interrupt.c
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#include "interrupt.h"
#include "avr/io.h"
#include "avr/interrupt.h"

#define NULL  ((void*)0)

static volatile void (*ptr_funCallBabk)(void)=NULL;

ISR(INT0_vect)
{
	if(ptr_funCallBabk != NULL)
	{
		(*ptr_funCallBabk)();
	}
}


void INT0_init(void)
{
	DDRB &= (1<<PD2);

	MCUCR |= (1<<ISC01);
	GICR |= (1<<INT0);
	SREG |= (1<<7);


}
void INT0_setCallBack(void(*a_ptr)(void))
{
	ptr_funCallBabk=a_ptr;
}
