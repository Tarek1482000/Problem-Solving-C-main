/*
 *  Swap 4-bits with the other 4 bits in a byte.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;

#define  FIRST_4_BOTH             0
#define  LAST_4_BOTH              1
#define  FIRST_4_VAR1_LAST_VAR2   2
#define  FIRST_4_VAR2_LAST_VAR1   3


void Swap(u8 *var1,u8 *var2,u8 type)
{
	u8 temp = 0;
	switch(type)
	{
	case FIRST_4_BOTH:
		temp = *var1;
		*var1 = (*var1 & 0XF0) | (*var2 & 0x0F);
		*var2 = (*var2 & 0XF0) | (temp  & 0x0F);
		break;
	case LAST_4_BOTH:
		temp = *var1;
		*var1 = (*var1 & 0x0F) | (*var2 & 0XF0);
		*var2 = (*var2 & 0x0F) | (temp  & 0XF0);
		break;
	case FIRST_4_VAR1_LAST_VAR2:
		temp = *var1;
		*var1 = (*var1 & 0XF0) | (((*var2)>>4) & 0X0F);
		*var2 = (*var2 & 0x0F) | ((temp & 0X0F)<<4);
		break;
	case FIRST_4_VAR2_LAST_VAR1:
		temp = *var1;
		*var1 = (*var1 & 0X0F) | (((*var2)& 0X0F)<<4);
		*var2 = (*var2 & 0xF0) | ((temp & 0XF0)>>4);
		break;
	default:
		break;
	}

}


void print_Binary(u8 num)
{
	u8 mask = 0x80;
	for(u8 i =0 ;i < 8 ;i++)
	{
		if((num<<i)&(mask))
		{
			printf("%d",1);
		}
		else
		{
			printf("%d",0);
		}
	}
	printf("\n");
}
int main(void)
{
	setbuf(stdout,NULL);

	u8 var1 = 128 , var2 = 1;

	printf("var1 before swap: ");
	print_Binary(var1);
	printf("var2 before swap: ");
	print_Binary(var2);

	Swap(&var1, &var2,FIRST_4_VAR2_LAST_VAR1);

	printf("\nvar1 after swap:  ");
	print_Binary(var1);
	printf("var2 after swap:  ");
	print_Binary(var2);

	return 0;
}
