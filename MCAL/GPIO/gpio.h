/*
 * Module: GPIO
 *
 * File Name: gpio.h
 *
 * Created: 11/11/2022
 * Author : AbdElRuhman Abdallah
 */


#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>
#include <avr/interrupt.h>




#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define LOGIC_HIGH        (1u)
#define LOGIC_LOW         (0u)

#define NULL_PTR    ((void*)0)


/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


typedef unsigned char         uint8;




/* Definitions */
#define NUM_OF_PORTS           4
#define NUM_OF_PINS_PER_PORT   8

#define PORTA_ID               0
#define PORTB_ID               1
#define PORTC_ID               2
#define PORTD_ID               3

#define PIN0_ID                0
#define PIN1_ID                1
#define PIN2_ID                2
#define PIN3_ID                3
#define PIN4_ID                4
#define PIN5_ID                5
#define PIN6_ID                6
#define PIN7_ID                7


/*Types Declaration */
typedef enum
{
	PIN_INPUT,PIN_OUTPUT
}GPIO_PinDirectionType;

typedef enum
{
	PORT_INPUT,PORT_OUTPUT=0xFF
}GPIO_PortDirectionType;

/*Functions Prototypes */

void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num, GPIO_PinDirectionType direction);


void GPIO_writePin(uint8 port_num, uint8 pin_num, uint8 value);


uint8 GPIO_readPin(uint8 port_num, uint8 pin_num);


void GPIO_setupPortDirection(uint8 port_num, uint8 direction);


void GPIO_writePort(uint8 port_num, uint8 value);


uint8 GPIO_readPort(uint8 port_num);

#endif /* GPIO_H_ */
