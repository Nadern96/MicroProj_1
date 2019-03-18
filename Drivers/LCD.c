/*
 *  LCD.c
 *
 *  Created on: Aug 17, 2018
 *      Author: Nader
 */

#include "Std_Types.h"
#include "utlisis.h"
#include "DIO.h"
#include "LCD.h"

 u32 counter ;
 
 
 void delay_ms (u32 time ) {
 u32 count ;
 while (time >0 )
 {
	count = 16000;			// to delay time ms for 80Mhz 
	while (count >0)
	{
	count =count-1;
	
	} 
	time =time-1;
 
 }
}
void LCD_vidWriteCommand (u8 command)
{
	//RW = 0 to write
	DIO_WritePin(LCD_Control,LCD_RW,LOW);

	//RS = 0 for command
	DIO_WritePin(LCD_Control,LCD_RS,LOW);

	//PORT = command
	DIO_vid_WritePortVal(LCD_Data,command);

	// E = 1 enable =1 to start exec

	DIO_WritePin(LCD_Control,LCD_E,HIGH);

	//leave E= 1 (opened) for 2milliseconds until data is displayed
	delay_ms(2);

	DIO_WritePin(LCD_Control,LCD_E,LOW);
}

void LCD_vidWriteData (u8 data)
{
	//RW = 0 to write
	DIO_WritePin(LCD_Control,LCD_RW,LOW);

	//RS = 0 for command
	DIO_WritePin(LCD_Control,LCD_RS,HIGH);

	//PORT = data
	DIO_vid_WritePortVal(LCD_Data,data);

	// E = 1 enable =1 to start exec

	DIO_WritePin(LCD_Control,LCD_E,HIGH);

	//leave E= 1 (opened) for 2milliseconds until data is displayed
	delay_ms(2);

	DIO_WritePin(LCD_Control,LCD_E,LOW);

}

void LCD_vidInit(void)
{
	Port_Init(LCD_Data);
	Port_Init(LCD_Control);
	Port_vid_SetPortDir(LCD_Data,OUTPUT_PORT);
	Port_SetPinDirection(LCD_Control,LCD_RS,OUTPUT_PIN);
	Port_SetPinDirection(LCD_Control,LCD_RW,OUTPUT_PIN);
	Port_SetPinDirection(LCD_Control,LCD_E,OUTPUT_PIN);


	// LCD intialization look at LCD dataSheet
	delay_ms(50);
	LCD_vidWriteCommand(0x3C);

	delay_ms(2);
	LCD_vidWriteCommand(0x0E);

	delay_ms(2);
	LCD_vidWriteCommand(0x01);

	delay_ms(2);
}
