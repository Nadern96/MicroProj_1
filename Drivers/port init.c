#include "tm4c123gh6pm.h"
#include "utlisis.h"
#include "std_types.h"
#include "DIO.h"




void Port_Init(u8 port_index)
{
    volatile unsigned long delay;           //for 5 cycle delay
    set_bit(SYSCTL_RCGCGPIO_R, port_index); // Port clock enable
    delay = SYSCTL_RCGCGPIO_R;              // delay for init
    switch (port_index)
    {
    case 0:
        GPIO_PORTA_CR_R |= 0xFF ; //enable pins
        GPIO_PORTA_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTA_AMSEL_R = 0x00 ; // Disable analog function
        GPIO_PORTA_AFSEL_R = 0x00 ; // No alternate function
        break;
    case 1:
        GPIO_PORTB_CR_R |= 0xFF ; //enable pins
        GPIO_PORTB_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTB_AMSEL_R = 0x00; // Disable analog function
        GPIO_PORTB_AFSEL_R = 0x00; // No alternate function
        break;
    case 2:
        GPIO_PORTC_CR_R |= 0xFF ; //enable pins
        GPIO_PORTC_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTC_AMSEL_R = 0x00; // Disable analog function
        GPIO_PORTC_AFSEL_R = 0x00; // No alternate function
        break;
    case 3:
        GPIO_PORTD_CR_R |= 0xFF; //enable pins
        GPIO_PORTD_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTD_AMSEL_R = 0x00; // Disable analog function
        GPIO_PORTD_AFSEL_R = 0x00; // No alternate function

        break;

    case 4:
        GPIO_PORTE_CR_R |= 0x3F ; //enable pins "only 6 pins"
        GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTE_AMSEL_R &= ~ 0x3F; // Disable analog function
        GPIO_PORTE_AFSEL_R = 0x00; // No alternate function
        break;

    case 5:
        GPIO_PORTF_CR_R |= 0x1F ;     //enable pins "only 5 pins"
        GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY; //unocking portf
        GPIO_PORTF_AMSEL_R &= ~0x1F;         // Disable analog function
        GPIO_PORTF_AFSEL_R = 0x00;         // No alternate function
        break;
    default:
        break;
    }
}