/*
 * Utils.h
 *
 *  Created on: Aug 11, 2018
 *      Author: Nader
 */

#ifndef UTILS_H_
#define UTILS_H_


#define set_bit(reg,bitno)	reg|=(1<<bitno)
#define clr_bit(reg,bitno)	reg&=( ~(1<<bitno) )
#define toggle_bit(reg,bitno)	reg^=(1<<(bitno))
//#define assign_bit(reg,bitnum,value) (value) ? set_bit(reg,bitnum): clr_bit(reg,bitnum)
#define assign_bit(reg,bitno,value)	do{ clr_bit(reg,bitno); reg|=((value)<<bitno); }while(0)


#endif /* UTILS_H_ */
