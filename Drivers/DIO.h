#ifndef DIO_H_
#define DIO_H_


#define portA 0
#define portB 1
#define portC 2
#define portD 3
#define portE 4
#define portF 5

#define OUTPUT 1 
#define INPUT 0 

#define LOW 0 
#define HIGH 1


void Port_Init(u8 port_index);
void Port_SetPinDirection(u8 PORT, u8 PIN, u8 DIR);
u8 DIO_ReadPort(u8 PORT, u8 PIN);
void DIO_WritePort(u8 PORT, u8 PIN, u8 VALUE);
void DIO_PinPullUp(u8 PORT, u8 PIN);
void DIO_PinPullDown(u8 PORT, u8 PIN);

#endif /* DIO_H_ */

