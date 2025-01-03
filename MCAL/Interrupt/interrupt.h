/*
 * interrupt.h
 *
 *  Created on: Nov 8, 2022
 *      Author: AbdElRuhman
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_H_
#define MCAL_INTERRUPT_INTERRUPT_H_


void INT0_init(void);
void INT0_setCallBack(void(*a_ptr)(void));

#endif /* MCAL_INTERRUPT_INTERRUPT_H_ */
