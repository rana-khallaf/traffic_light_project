/*
 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: hp
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "GIE_interface.h"
#include "TIMER0_interface.h"
#include "TIMER2_interface.h"
#include "CLCD_interface.h"
#include "SSD_interface.h"
#include<util/delay.h>


void led(void);
void seg(void);



 static SSD_TYPE SSD1 ={SSD_COMMON_ANODE,DIO_PORTD,DIO_PORTC,DIO_PIN7};

void main(void)
{

  DIO_voidSetPortDirection(DIO_PORTA,PORT_DIR_OUTPUT);

  TIMER0_voidSetOCRValue(125);
  TIMER0_voidInit();


  TIMER2_voidSetOCRValue(125);
  TIMER2_voidInit();

   CLCD_voidInit();


   SSD_voidInitalDataPort(SSD1);


   TIMER0_u8SetCallBack(seg);
   TIMER2_u8SetCallBack(led);

   GIE_voidEnable();


   while(1)
   {



   }




}




void led (void)
{
	static u32 Local_u16counter = 0;
	Local_u16counter ++;


	if (Local_u16counter == 500)
	{
		CLCD_voidClearScreen();
		CLCD_voidSendString(" Car Can Go");
		CLCD_voidSendExtraChar(CLCD_ROW_2,CLCD_COL_6,0,2);

		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_LOW);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,PIN_VAL_LOW);
	}

	else if (Local_u16counter == 20000)
	{
		CLCD_voidClearScreen();
		CLCD_voidSendString("    ALL Stop");
		CLCD_voidSendExtraChar(CLCD_ROW_2,CLCD_COL_6,2,4);


		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_LOW);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_HIGH);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,PIN_VAL_LOW);
	}

	else if (Local_u16counter == 30000)
	{
		CLCD_voidClearScreen();
		CLCD_voidSendString(" People Can GO");
		CLCD_voidSendExtraChar(CLCD_ROW_2,CLCD_COL_6,4,6);

		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_LOW);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_LOW);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,PIN_VAL_HIGH);

	}

	else if (Local_u16counter == 50000)
	{
		Local_u16counter = 0;
	}

}

void seg(void)
{

	static u16 Local_u16counter1 = 0;
		Local_u16counter1 ++;

		if(Local_u16counter1==1000)
		{
			SSD_voidSendNumber(SSD1,9);

		}
		else if(Local_u16counter1==2000)
		{
			SSD_voidSendNumber(SSD1,8);

		}
		else if(Local_u16counter1==3000)
			{
			SSD_voidSendNumber(SSD1,7);

			}
		else if(Local_u16counter1==4000)
				{
					SSD_voidSendNumber(SSD1,6);

				}
		else if(Local_u16counter1==5000)
				{
					SSD_voidSendNumber(SSD1,5);

				}
		else if(Local_u16counter1==6000)
				{
					SSD_voidSendNumber(SSD1,4);

				}
		else if(Local_u16counter1==7000)
				{
					SSD_voidSendNumber(SSD1,3);

				}
		else if(Local_u16counter1==8000)
				{
					SSD_voidSendNumber(SSD1,2);

				}
		else if(Local_u16counter1==9000)
				{
					SSD_voidSendNumber(SSD1,1);

				}
		else if(Local_u16counter1==10000)
				{
					SSD_voidSendNumber(SSD1,0);

				}





		else if(Local_u16counter1==12000)
						{
							SSD_voidSendNumber(SSD1,3);

						}
				else if(Local_u16counter1==13000)
						{
							SSD_voidSendNumber(SSD1,2);

						}
				else if(Local_u16counter1==14000)
						{
							SSD_voidSendNumber(SSD1,1);

						}
				else if(Local_u16counter1==15000)
						{
							SSD_voidSendNumber(SSD1,0);

						}





		if(Local_u16counter1==16000)
				{
					SSD_voidSendNumber(SSD1,9);

				}
				else if(Local_u16counter1==17000)
				{
					SSD_voidSendNumber(SSD1,8);

				}
				else if(Local_u16counter1==18000)
					{
					SSD_voidSendNumber(SSD1,7);

					}
				else if(Local_u16counter1==19000)
						{
							SSD_voidSendNumber(SSD1,6);

						}
				else if(Local_u16counter1==20000)
						{
							SSD_voidSendNumber(SSD1,5);

						}
				else if(Local_u16counter1==21000)
						{
							SSD_voidSendNumber(SSD1,4);

						}
				else if(Local_u16counter1==22000)
						{
							SSD_voidSendNumber(SSD1,3);

						}
				else if(Local_u16counter1==23000)
						{
							SSD_voidSendNumber(SSD1,2);

						}
				else if(Local_u16counter1==24000)
						{
							SSD_voidSendNumber(SSD1,1);

						}
				else if(Local_u16counter1==25000)
						{
							SSD_voidSendNumber(SSD1,0);

						}

				else if (Local_u16counter1 == 26000)
					{
						Local_u16counter1 =0;
					}






}







