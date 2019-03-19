void delay_ms (u32 time ) {
 u32 count ;
 while (time >0 )
 {
	count = 16000;			// to delay time ms for 80Mhz 
	while (count >0)
	{
	count =count-1;
	
	} 
	time =time-1;
 
 }
 
 }
