/*
 * button.c
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#include "button.h"

#include "../../MCAL/GPIO/gpio.h"


/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

#define Pressed         1U
#define NotPressed      0U


void button_init(void)
{
	GPIO_setupPinDirection(Button_PORT,Button_PIN,PIN_INPUT);
}

uint8 button_isPressed(uint8 port_num,uint8 pin_num)
{
	uint8 state=0;
	state=GPIO_readPin(port_num,pin_num);
	return state;

}


