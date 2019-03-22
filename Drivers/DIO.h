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
void Port_vid_SetPortDir(u8 port, u8 Dir);
void Port_vid_SetPinDir(u8 port , u8 pin , u8 Dir);
u8 DIO_u8ReadPinVal (u8 port , u8 pin );
u8 DIO_u8ReadPortVal (u8 port);
void DIO_vid_WritePinVal(u8 port , u8 pin , u8 val);
void DIO_vid_WritePortVal(u8 port , u8 val);
void DIO_vid_TogglePinVal(u8 port , u8 pin){;
void DIO_vid_TogglePortVal(u8 port);
void Port_vid_SetPinPullUp (u8 port , u8 pin);                                            
void Port_vid_SetPinPullDown (u8 port , u8 pin)

#endif /* DIO_H_ */

