/*
 * Swap two variables without using Temp . variable or pointer.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;


void Swap(u8 *num1,u8 *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}
int main(void)
{
	setbuf(stdout,NULL);

	u8 num1 =10 ,num2 =20;
	printf("Before Swap: num1 = %d , num2 = %d\n",num1,num2);
	Swap(&num1, &num2);
	printf("After Swap:  num1 = %d , num2 = %d\n",num1,num2);

	return 0;
}


