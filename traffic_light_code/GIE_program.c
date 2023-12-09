/*
 * GIE_program.c
 *
 *  Created on: Oct 13, 2023
 *      Author: hp
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GIE_config.h"
#include"GIE_interface.h"
#include"GIE_private.h"


void GIE_voidEnable(void)
{
	SET_BIT(SRGE,SRGE_I);


}

void GIE_voidDisable(void)
{
	CLR_BIT(SRGE,SRGE_I);
}
