/*
 *  Swap 4-bits with the other 4 bits in a byte.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


void reverse(u8 *var)
{
	u8 res = 0 , temp = *var;

	for(u8 i =0 ;i<8 ; i++)
		res |= ((temp & (1 << i)) >> i) << (7 - i);
	*var = res;
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

	u8 var = 130 ;

	printf("Number before reverse: ");
	print_Binary(var);

	reverse(&var);
	printf("Number after reverse:  ");
	print_Binary(var);
	return 0;
}
