#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "PORT.h"
#include "DIO.h"

 
void Port_vid_SetPinPullUp (u8 port , u8 pin){
	switch (port){
		case PORTA:
			set_bit(GPIO_PORTA_PUR_R,pin);
			break;
		case PORTB:
			set_bit(GPIO_PORTB_PUR_R,pin);
			break;
		case PORTC:
			set_bit(GPIO_PORTC_PUR_R,pin);
			break;
		case PORTD:
			set_bit(GPIO_PORTD_PUR_R,pin);
			break;
		case PORTE:
			set_bit(GPIO_PORTE_PUR_R,pin);
			break;
		case PORTF:
			set_bit(GPIO_PORTF_PUR_R,pin);
			break;
	}
}
void Port_vid_SetPinPullDown (u8 port , u8 pin){
	switch (port){
		case PORTA:
			set_bit(GPIO_PORTA_PDR_R,pin);
			break;
		case PORTB:
			set_bit(GPIO_PORTB_PDR_R,pin);
			break;
		case PORTC:
			set_bit(GPIO_PORTC_PDR_R,pin);
			break;
		case PORTD:
			set_bit(GPIO_PORTD_PDR_R,pin);
			break;
		case PORTE:
			set_bit(GPIO_PORTE_PDR_R,pin);
			break;
		case PORTF:
			set_bit(GPIO_PORTF_PDR_R,pin);
			break;
	}
}