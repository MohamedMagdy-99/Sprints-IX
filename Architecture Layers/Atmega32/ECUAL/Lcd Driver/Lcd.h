/*****************************************************************************
* Module: Lcd Module
* File Name: Lcd.h
* Description: Header file for Lcd Module
* Author: Mohamed Magdy
* Date: 24-July-2021
******************************************************************************/

#ifndef LCD_H_
#define LCD_H_

/* INCLUDES */

#include "../../Microcontroller/Std_Types.h"
#include "../../Microcontroller/Common_Macros.h"
#include "../../MCAL/Dio Driver/Dio.h"
#include "Lcd_Cfg.h"
#include "../../Microcontroller/Delay Module/Delay.h"
#include "../../Microcontroller/Utility Module/Utility.h"

/* CONSTANTS */
/* Commands */
#define CLEAR			0x01
#define HOME			0x02
#define ENTRY_MODE		0x06
#define DISPLAY_ON		0x0C
#define	DISPLAY_OFF		0x08

/*- ENUMS --------------------------------------------------*/
typedef enum
{
	LCD_STATUS_ERROR_NOK,
	LCD_STATUS_ERROR_OK

}enuLcd_Status_t;

typedef enum
{
	LCD_INITIALIZED,
	LCD_NOT_INITIALIZED
}enuLcd_initStatus_t;
/*************************/
/*- FUNCTION DECLARATIONS ----------------------------------*/
enuLcd_Status_t Lcd_toggleEnable(void);
enuLcd_Status_t Lcd_sendData_4bitMode(uint8_t u8_data);
enuLcd_Status_t Lcd_sendCharacter(uint8_t u8_char);
enuLcd_Status_t Lcd_sendString(uint8_t* au8_string);
enuLcd_Status_t Lcd_cursorPosition(uint8_t u8_xAxis, uint8_t u8_yAxis);
enuLcd_Status_t Lcd_sendCommand(uint8_t u8_command);
enuLcd_Status_t Lcd_init(void);

enuLcd_Status_t Lcd_sendHigherNibble(uint8_t u8_data);
enuLcd_Status_t Lcd_sendLowerNibble(uint8_t u8_data);

enuLcd_Status_t Lcd_sendVariableInt(uint16_t u16_number, uint8_t *pu8_String, uint8_t u8_base);
#endif /* LCD_H_ */