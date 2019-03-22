#include "tm4c123gh6pm.h"
#include "Utils.h"
#include "Std_Types.h"
#include "DIO.h"

 
 void init_bushbutton ( u8 port , u8 pin ) ;
 u32 is_pressed_increment ( u8 port , u8 pin); 
 u32 is_pressed_decrement  (u8 port , u8 pin) ;
 void is_pressed_reset(u8 port , u8 pin) ;
 void dealy_ms (u32 time ) ;
 
 u32 counter ; 
 

 
 }
 
  void init_bushbutton ( u8 port , u8 pin ) {
  
	Port_vid_Init(port) ; // initiallise the port 
  
	Port_vid_SetPinDir(port , pin , INPUT_PIN); // make pin dir input 
	Port_vid_SetPinPullUp ( port , pin); // make pin pull_up reg 
	
  }
 
 
 
 u32 is_pressed_increment ( u8 port , u8 pin){
 
	u8 result ;
   result = DIO_u8ReadPinVal ( port , pin );
     if (result ==0) // is pressed 
	 return counter++
  else  // not pressed 
	  return counter ;
			
 }
 
 
 u32 is_pressed_decrement  (u8 port , u8 pin) {
 	u8 result ;
   result = DIO_u8ReadPinVal ( port , pin );
  if (result ==0) // is pressed 
  return counter--;
  else  // not pressed 
	  return counter ;
 }
 
 
 
 void is_pressed_reset(u8 port , u8 pin) {
 	u8 result ;
   result = DIO_u8ReadPinVal ( port , pin );
   if (result ==0) // is pressed 
  counter=0;
  else  // not pressed 
	  return ;
 }
 
 
 
 
 
 
