/*
 * TIMER2_interface.h
 *
 *  Created on: Dec 8, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_TIMER2_TIMER2_INTERFACE_H_
#define MINE_MCAL_TIMER2_TIMER2_INTERFACE_H_

void TIMER2_voidInit(void);

u8 TIMER2_u8SetCallBack(void (*Copy_ptrtofunc) (void));

void TIMER2_voidSetOCRValue(u8 Copy_u8Value);

void TIMER2_voidSetPWMMode(void);



#endif /* MINE_MCAL_TIMER2_TIMER2_INTERFACE_H_ */
