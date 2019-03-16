/*
 * LCD.h
 *
 *  Created on: Aug 17, 2018
 *      Author: Nader
 */

#ifndef LCD_H_
#define LCD_H_

#define LCD_Data PORTB
#define LCD_Control PORTA
#define LCD_RS PIN7
#define LCD_RW PIN6
#define LCD_E PIN5
#define First_Row 1
#define Second_Row 2






void LCD_vidWriteCommand (u8 command);
void LCD_vidWriteData (u8 data);
void LCD_vidInit(void);
void LCD_vidDisplayString (u8 str[]);
void LCD_vidDisplayInt (u16 num) ;
#endif /* LCD_H_ */
