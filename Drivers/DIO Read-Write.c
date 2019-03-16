#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "DIO.h"

void DIO_vid_WritePortVal(u8 port , u8 val)
{
	switch(port)
		{
			case portA:
				GPIO_PORTA_DATA_R = val;
				break;

			case portB:
				GPIO_PORTB_DATA_R = val;
				break;

			case portC:
				GPIO_PORTC_DATA_R = val;
				break;

			case portD:
				GPIO_PORTD_DATA_R = val;
				break;
			
			case portE:
				GPIO_PORTE_DATA_R = val;
				break;
			
			case portF:
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
			case portA:
				ReadVal = GPIO_PORTA_DATA_R;
				break;

			case portB:
				ReadVal = GPIO_PORTB_DATA_R;
				break;

			case portC:
				ReadVal = GPIO_PORTC_DATA_R;
				break;

			case portD:
				ReadVal = GPIO_PORTD_DATA_R;
				break;
			
			case portE:
				ReadVal = GPIO_PORTE_DATA_R;
				break;
			
			case portF:
				ReadVal = GPIO_PORTF_DATA_R;
				break;

		}
		return ReadVal;
}
void DIO_vid_TogglePortVal(u8 port){
	u8 mask = 0XFF;
	
	switch(port)
		{
			case portA:
				GPIO_PORTA_DATA_R = GPIO_PORTA_DATA_R ^ mask;
				break;

			case portB:
				GPIO_PORTB_DATA_R = GPIO_PORTB_DATA_R ^ mask;
				break;

			case portC:
				GPIO_PORTC_DATA_R = GPIO_PORTC_DATA_R ^ mask;
				break;

			case portD:
				GPIO_PORTD_DATA_R = GPIO_PORTD_DATA_R ^ mask;
				break;
			
			case portE:
				GPIO_PORTE_DATA_R = GPIO_PORTE_DATA_R ^ mask;
				break;
			
			case portF:
				GPIO_PORTF_DATA_R = GPIO_PORTF_DATA_R ^ mask;
				break;
		}
	
}

void DIO_vid_WritePinVal(u8 port , u8 pin , u8 val)
{
	
	switch(port)
		{
			case portA :
				assign_bit(GPIO_PORTA_DATA_R,pin,val);
				break;
				

			case portB :
				assign_bit(GPIO_PORTB_DATA_R,pin,val);
				break;

			case portC :
				assign_bit(GPIO_PORTC_DATA_R,pin,val);
				break;

			case portD :
				assign_bit(GPIO_PORTD_DATA_R,pin,val);
				break;
					
			case portE :
				assign_bit(GPIO_PORTE_DATA_R,pin,val);
				break;
			
			case portF :
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
			case portA:
				ReadVal = get_bit(GPIO_PORTA_DATA_R,pin);
				break;

			case portB:
				ReadVal = get_bit(GPIO_PORTB_DATA_R,pin);
				break;

			case portC:
				ReadVal = get_bit(GPIO_PORTC_DATA_R,pin);
				break;

			case portD:
				ReadVal = get_bit(GPIO_PORTD_DATA_R,pin);
				break;
			
			case portE:
				ReadVal = get_bit(GPIO_PORTE_DATA_R,pin);
				break;
			
			case portE:
				ReadVal = get_bit(GPIO_PORTF_DATA_R,pin);
				break;

		}
	
		return ReadVal;
}

void DIO_vid_TogglePinVal(u8 port , u8 pin){
	
	switch(port)
		{
			case portA:
				toggle_bit(GPIO_PORTA_DATA_R,pin);
				break;

			case portB:
				toggle_bit(GPIO_PORTB_DATA_R,pin);
				break;

			case portC:
				toggle_bit(GPIO_PORTC_DATA_R,pin);
				break;

			case portD:
				toggle_bit(GPIO_PORTD_DATA_R,pin);
				break;
			
			case portE:
				toggle_bit(GPIO_PORTE_DATA_R,pin);
				break;
			
			case portF:
				toggle_bit(GPIO_PORTF_DATA_R,pin);
				break;
		}
	
}



