#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "DIO.h"

void DIO_vid_WritePortVal(u8 port , u8 val)
{
	switch(port)
		{
			case 0:
				GPIO_PORTA_DATA_R = val;
				break;

			case 1:
				GPIO_PORTB_DATA_R = val;
				break;

			case 2:
				GPIO_PORTC_DATA_R = val;
				break;

			case 3:
				GPIO_PORTD_DATA_R = val;
				break;
			
			case 4:
				GPIO_PORTE_DATA_R = val;
				break;
			
			case 5:
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
			case 0:
				ReadVal = GPIO_PORTA_DATA_R;
				break;

			case 1:
				ReadVal = GPIO_PORTB_DATA_R;
				break;

			case 2:
				ReadVal = GPIO_PORTC_DATA_R;
				break;

			case 3:
				ReadVal = GPIO_PORTD_DATA_R;
				break;
			
			case 4:
				ReadVal = GPIO_PORTE_DATA_R;
				break;
			
			case 5:
				ReadVal = GPIO_PORTF_DATA_R;
				break;

		}
		return ReadVal;
}
void DIO_vid_TogglePortVal(u8 port){
	u8 mask = 0XFF;
	
	switch(port)
		{
			case 0:
				GPIO_PORTA_DATA_R = GPIO_PORTA_DATA_R ^ mask;
				break;

			case 1:
				GPIO_PORTB_DATA_R = GPIO_PORTB_DATA_R ^ mask;
				break;

			case 2:
				GPIO_PORTC_DATA_R = GPIO_PORTC_DATA_R ^ mask;
				break;

			case 3:
				GPIO_PORTD_DATA_R = GPIO_PORTD_DATA_R ^ mask;
				break;
			
			case 4:
				GPIO_PORTE_DATA_R = GPIO_PORTE_DATA_R ^ mask;
				break;
			
			case 5:
				GPIO_PORTF_DATA_R = GPIO_PORTF_DATA_R ^ mask;
				break;
		}
	
}

void DIO_vid_WritePinVal(u8 port , u8 pin , u8 val)
{
	
	switch(port)
		{
			case 0 :
				assign_bit(GPIO_PORTA_DATA_R,pin,val);
				break;
				

			case 1 :
				assign_bit(GPIO_PORTB_DATA_R,pin,val);
				break;

			case 2 :
				assign_bit(GPIO_PORTC_DATA_R,pin,val);
				break;

			case 3 :
				assign_bit(GPIO_PORTD_DATA_R,pin,val);
				break;
					
			case 4 :
				assign_bit(GPIO_PORTE_DATA_R,pin,val);
				break;
			
			case 5 :
				assign_bit(GPIO_PORTF_DATA_R,pin,val);
				break;

			default:
				break;
		}
}


u8 DIO_u8ReadPinVal (u8 port , u8 pin ){
	u8 ReadVal = 2;

	switch(port)
		{
			case 0:
				ReadVal = get_bit(GPIO_PORTA_DATA_R,pin);
				break;

			case 1:
				ReadVal = get_bit(GPIO_PORTB_DATA_R,pin);
				break;

			case 2:
				ReadVal = get_bit(GPIO_PORTC_DATA_R,pin);
				break;

			case 3:
				ReadVal = get_bit(GPIO_PORTD_DATA_R,pin);
				break;
			
			case 4:
				ReadVal = get_bit(GPIO_PORTE_DATA_R,pin);
				break;
			
			case 5:
				ReadVal = get_bit(GPIO_PORTF_DATA_R,pin);
				break;

		}
	
		return ReadVal;
}

void DIO_vid_TogglePinVal(u8 port , u8 pin){
	
	switch(port)
		{
			case 0:
				toggle_bit(GPIO_PORTA_DATA_R,pin);
				break;

			case 1:
				toggle_bit(GPIO_PORTB_DATA_R,pin);
				break;

			case 2:
				toggle_bit(GPIO_PORTC_DATA_R,pin);
				break;

			case 3:
				toggle_bit(GPIO_PORTD_DATA_R,pin);
				break;
			
			case 4:
				toggle_bit(GPIO_PORTE_DATA_R,pin);
				break;
			
			case 5:
				toggle_bit(GPIO_PORTF_DATA_R,pin);
				break;
		}
	
}



