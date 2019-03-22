#include "Std_Types.h"
#include "Utils.h"
#include "DIO.h"
#include "LCD.h"

void LCD_vidDisplayString (u8 str[])
{
	u8 i;


	for (i = 0 ; str[i] != '\0' ; i++)
	{
		LCD_vidWriteData(str[i]);
		delay_ms(500);

		if (i==16)
		{
			LCD_vidWriteCommand(0xC0);
		}
	}



}

void LCD_vidDisplayInt (u16 num)
{
	u8 number [6];
	u8 i=0 , j;

	while (num!=0)
	{
		number [i] = num %10;
		num /= 10;
		i++;
	}

	for (j = i ; j>0 ; j--)
	{
		LCD_vidWriteData( 48+number[j-1] );
	}

}
