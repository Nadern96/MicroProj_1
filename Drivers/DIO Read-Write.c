#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "DIO.h"

void DIO_vid_WritePortVal(u8 port , u8 val)
{
	switch(port)
		{
			case PORTA:
				GPIO_PORTA_DATA_R = val;
				break;

			case PORTB:
				GPIO_PORTB_DATA_R = val;
				break;

			case PORTC:
				GPIO_PORTC_DATA_R = val;
				break;

			case PORTD:
				GPIO_PORTD_DATA_R = val;
				break;
			
			case PORTE:
				GPIO_PORTE_DATA_R = val;
				break;
			
			case PORTF:
				GPIO_PORTF_DATA_R = val;
				break;
		
			default:
				break;
		}
}

u8 DIO_u8ReadPortVal (u8 port)
{
	u8 ReadVal;

	switch(port)
		{
			case PORTA:
				ReadVal = GPIO_PORTA_DATA_R;
				break;

			case PORTB:
				ReadVal = GPIO_PORTB_DATA_R;
				break;

			case PORTC:
				ReadVal = GPIO_PORTC_DATA_R;
				break;

			case PORTD:
				ReadVal = GPIO_PORTD_DATA_R;
				break;
			
			case PORTE:
				ReadVal = GPIO_PORTE_DATA_R;
				break;
			
			case PORTF:
				ReadVal = GPIO_PORTF_DATA_R;
				break;

		}
		return ReadVal;
}
void DIO_vid_TogglePortVal(u8 port){
	u8 mask = 0XFF;
	
	switch(port)
		{
			case PORTA:
				GPIO_PORTA_DATA_R = GPIO_PORTA_DATA_R ^ mask;
				break;

			case PORTB:
				GPIO_PORTB_DATA_R = GPIO_PORTB_DATA_R ^ mask;
				break;

			case PORTC:
				GPIO_PORTC_DATA_R = GPIO_PORTC_DATA_R ^ mask;
				break;

			case PORTD:
				GPIO_PORTD_DATA_R = GPIO_PORTD_DATA_R ^ mask;
				break;
			
			case PORTE:
				GPIO_PORTE_DATA_R = GPIO_PORTE_DATA_R ^ mask;
				break;
			
			case PORTF:
				GPIO_PORTF_DATA_R = GPIO_PORTF_DATA_R ^ mask;
				break;
		}
	
}
