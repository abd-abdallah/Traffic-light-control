/*
 * led.c
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#include "led.h"
#include "../../MCAL/GPIO/gpio.h"



void LED_init(void)
{
	GPIO_setupPinDirection(Cars_LEDs,Green_LED,PIN_OUTPUT);
	GPIO_setupPinDirection(Cars_LEDs,Yellow_LED,PIN_OUTPUT);
	GPIO_setupPinDirection(Cars_LEDs,Red_LED,PIN_OUTPUT);

	GPIO_setupPinDirection(pedestrians_LEDs,Green_LED,PIN_OUTPUT);
	GPIO_setupPinDirection(pedestrians_LEDs,Yellow_LED,PIN_OUTPUT);
	GPIO_setupPinDirection(pedestrians_LEDs,Red_LED,PIN_OUTPUT);

}



void LED_on(uint8 port_num,uint8 pin_num)
{
	GPIO_writePin(port_num,pin_num,LOGIC_HIGH);
}




void LED_off(uint8 port_num,uint8 pin_num)
{
	GPIO_writePin(port_num,pin_num,LOGIC_LOW);
}
