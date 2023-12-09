	/*
	 * SSD_program.c
	 *
	 *  Created on: Oct 6, 2023
	 *      Author: hp
	 */

	#include"STD_TYPES.h"
	#include"SSD_config.h"
	#include"SSD_interface.h"
	#include"SSD_private.h"
	#include"BIT_MATH.h"
	#include"DIO_interface.h"


	static u8 Local_u8SSDNumers[10]=SSD_NUMBER_ARR;

	void SSD_voidInitalDataPort(SSD_TYPE Copy_structSSD_CONFIG)
	{
	 DIO_voidSetPortDirection(Copy_structSSD_CONFIG.Data_port,PORT_DIR_OUTPUT);

	}








	void SSD_voidEnable(SSD_TYPE Copy_structSSD_CONFIG)
	{
		if(Copy_structSSD_CONFIG.Type==SSD_COMMON_CATHODE)
		{
			DIO_voidSetPinDirection(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_DIR_OUTPUT);
			DIO_voidSetPinValue(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_VAL_LOW);

		}
		else if(Copy_structSSD_CONFIG.Type==SSD_COMMON_ANODE)
		{

		DIO_voidSetPinDirection(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_DIR_OUTPUT);
	    DIO_voidSetPinValue(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_VAL_HIGH);


		}


	}





	void SSD_voidDisable(SSD_TYPE Copy_structSSD_CONFIG)
	{
		if(Copy_structSSD_CONFIG.Type==SSD_COMMON_CATHODE)
				{
					DIO_voidSetPinDirection(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_DIR_OUTPUT);
					DIO_voidSetPinValue(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_VAL_HIGH);

				}
				else if(Copy_structSSD_CONFIG.Type==SSD_COMMON_ANODE)
				{

				DIO_voidSetPinDirection(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_DIR_OUTPUT);
			    DIO_voidSetPinValue(Copy_structSSD_CONFIG.Enable_port,Copy_structSSD_CONFIG.Enable_pin,PIN_VAL_LOW);


				}


	}
	void SSD_voidSendNumber(SSD_TYPE Copy_structSSD_CONFIG,u8 Copy_u8Number)
	{

		if(Copy_structSSD_CONFIG.Type==SSD_COMMON_CATHODE)
						{
		DIO_voidSetPortValue(Copy_structSSD_CONFIG.Data_port,Local_u8SSDNumers[Copy_u8Number]);


						}
		else if(Copy_structSSD_CONFIG.Type==SSD_COMMON_ANODE)
								{
				DIO_voidSetPortValue(Copy_structSSD_CONFIG.Data_port,~(Local_u8SSDNumers[Copy_u8Number]));


								}



	}

