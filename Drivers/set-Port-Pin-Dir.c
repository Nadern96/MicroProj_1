#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "DIO.h"


void Port_vid_SetPortDir(u8 port, u8 Dir){
	switch(port)
		{
			case 0:
				GPIO_PORTA_DIR_R = Dir;
				break;

			case 1:
				GPIO_PORTB_DIR_R = Dir;
				break;

			case 2:
				GPIO_PORTC_DIR_R = Dir;
				break;

			case 3:
				GPIO_PORTD_DIR_R = Dir;
				break;
			
			case 4:
				GPIO_PORTE_DIR_R = Dir;
				break;
			
			case 5:
				GPIO_PORTF_DIR_R = Dir;
				break;

			default:
				break;
		}
}
void Port_vid_SetPinDir(u8 port , u8 pin , u8 Dir){
	
	switch(port)
	{
		case 0 :
			assign_bit(GPIO_PORTA_DIR_R,pin,Dir);
			break;
				
		case 1 :
			assign_bit(GPIO_PORTB_DIR_R,pin,Dir);
			break;
		
		case 2 :
			assign_bit(GPIO_PORTC_DIR_R,pin,Dir);
			break;
		
		case 3 :
			assign_bit(GPIO_PORTD_DIR_R,pin,Dir);
			break;
		
		case 4 :
			assign_bit(GPIO_PORTE_DIR_R,pin,Dir);
			break;
		
		case 5 :
			assign_bit(GPIO_PORTF_DIR_R,pin,Dir);
			break;
		
		default:
			break;
	}
	
}

