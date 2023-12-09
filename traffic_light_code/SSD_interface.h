/*
 * SSD_interface.h
 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_SSD_SSD_INTERFACE_H_
#define MINE_HAL_SSD_SSD_INTERFACE_H_

#define SSD_COMMON_CATHODE 0
#define SSD_COMMON_ANODE   1


typedef struct
{
 u8 Type;
 u8 Data_port;
 u8 Enable_port;
 u8 Enable_pin;

}SSD_TYPE;

void SSD_voidInitalDataPort(SSD_TYPE Copy_structSSD_CONFIG);
void SSD_voidEnable(SSD_TYPE Copy_structSSD_CONFIG);
void SSD_voidDisable(SSD_TYPE Copy_structSSD_CONFIG);
void SSD_voidSendNumber(SSD_TYPE Copy_structSSD_CONFIG,u8 Copy_u8Number);



#endif /* MINE_HAL_SSD_SSD_INTERFACE_H_ */
