#include "DIO.h"

void DIO_PinPullUp(u8 PORT_index, u8 PINS_mask , u8 enable)
{
	
	switch ( PORT_index )
	{
	
	case portA : if (enable == 1 ) GPIO_portA_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portA_PUR_R &=~ PINS_mask ;
	break ;		
		
	
	
	
	case portB : if (enable == 1 ) GPIO_portB_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portB_PUR_R &=~ PINS_mask ;
	break ;		
		
	
	
	case portC : if (enable == 1 ) GPIO_portC_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portC_PUR_R &=~ PINS_mask ;
	break ;		
		
	
	
	
	case portD : if (enable == 1 ) GPIO_portD_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portD_PUR_R &=~ PINS_mask ;
	break ;		
		
	
	
	case portE: if (enable == 1 ) GPIO_portE_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portE_PUR_R &=~ PINS_mask ;
	break ;		
		
	
	case portF : if (enable == 1 ) GPIO_portF_PUR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portF_PUR_R &=~ PINS_mask ;
	break ;		
		
		
		default: break ;
	
	}
	
	
	
}

void DIO_PinPullDown(u8 PORT_index, u8 PINS_mask ,u8 enable)
{
	switch (PORT_index )
	{
		
	case portA : if (enable == 1 ) GPIO_portA_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portA_PDR_R &=~ PINS_mask ;
	break ;		
		
	
	case portB : if (enable == 1 ) GPIO_portB_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portB_PDR_R &=~ PINS_mask ;
	break ;		
		
	
		
		
	case portC : if (enable == 1 ) GPIO_portC_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portC_PDR_R &=~ PINS_mask ;
	break ;		
		
		
		
	
	case portD : if (enable == 1 ) GPIO_portD_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portD_PDR_R &=~ PINS_mask ;
	break ;		
			
		
		
		
		
		
	
	case portE : if (enable == 1 ) GPIO_portE_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portE_PDR_R &=~ PINS_mask ;
	break ;		
			
		
		
		
	case portF : if (enable == 1 ) GPIO_portF_PDR_R |=PINS_mask ;
		else if (enable ==0) GPIO_portF_PDR_R &=~ PINS_mask ;
	break ;		
		
		default : break ;
		
	}
	
	
}