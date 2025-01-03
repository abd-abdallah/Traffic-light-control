/*
 * button.h
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#ifndef ECUAL_BUTTON_BUTTON_H_
#define ECUAL_BUTTON_BUTTON_H_


#include "../../MCAL/GPIO/gpio.h"

typedef unsigned char         uint8; 

#define Button_PORT      PORTC_ID
#define Button_PIN       PIN2_ID



void  button_init(void);
uint8 button_isPressed(uint8 port_num,uint8 pin_num);

#endif /* ECUAL_BUTTON_BUTTON_H_ */
