/*
 * TIMER0_interface.h
 *
 *  Created on: Dec 8, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_TIMER_TIMER0_INTERFACE_H_
#define MINE_MCAL_TIMER_TIMER0_INTERFACE_H_

void TIMER0_voidInit(void);

u8 TIMER0_u8SetCallBack(void (*Copy_ptrtofunc) (void));

void TIMER0_voidSetOCRValue(u8 Copy_u8Value);

void TIMER0_voidSetPWMMode(void);



#endif /* MINE_MCAL_TIMER_TIMER0_INTERFACE_H_ */
