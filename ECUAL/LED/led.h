/*
 * led.h
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#ifndef ECUAL_LED_LED_H_
#define ECUAL_LED_LED_H_



#include "../../MCAL/GPIO/gpio.h"

typedef unsigned char         uint8;  

#define Cars_LEDs            PORTA_ID
#define pedestrians_LEDs     PORTB_ID

#define Green_LED           PIN0_ID
#define Yellow_LED          PIN1_ID
#define Red_LED             PIN2_ID


void LED_init(void);
void LED_on(uint8 port_num,uint8 pin_num);
void LED_off(uint8 port_num,uint8 pin_num);

#endif /* ECUAL_LED_LED_H_ */
