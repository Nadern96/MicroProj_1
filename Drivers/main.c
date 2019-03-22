#include "tm4c123gh6pm.h"
#include "std_types.h"
#include "utlisis.h"
#include "DIO.h"
#include "LCD.h"
#include "delay.h"

int main(void)
{ 
	u8 in;
	s32 counter=0;
	LCD_vidInit();
	LCD_vidDisplayInt(1);
	while(1)
	{
			//in = SW1_Input();
		if(!DIO_ReadPin(portF,4))
			{ 
				counter++;
				LCD_vidWriteCommand(1);
				if(counter>999) counter=0;
				LCD_vidDisplayInt(counter);
				delay_ms (200);
	}
		if(!DIO_ReadPin(portF,3))
			{ while(!DIO_ReadPin(portF,3));
				counter--;
				if(counter<0) counter=0;
				LCD_vidWriteCommand(1);
				delay_ms(50);
				LCD_vidDisplayInt(counter);
				delay_ms (50);
	}		
	
	
			if(!DIO_ReadPin(portF,2))
			{ while(!DIO_ReadPin(portF,2));
				counter=0;
				LCD_vidWriteCommand(1);
				delay_ms(50);
				LCD_vidDisplayInt(counter);
				delay_ms (50);
	}	
	
	}

}

