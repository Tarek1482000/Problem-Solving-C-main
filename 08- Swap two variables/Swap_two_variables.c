/*
 * Swap two variables.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Swap(u8 *var1, u8 *var2)
{
	u8 temp = 0;

		temp  = *var1;
		*var1 = *var2;
		*var2 =  temp;


}
int main(void)
{
	setbuf(stdout,NULL);

	u8 num1 =10 ,num2 =23;

	printf("Before Swap:\nNum1: %d - Num2: %d\n",num1,num2);
	Swap(&num1, &num2);

	printf("After Swap:\nNum1: %d - Num2: %d\n",num1,num2);
	return 0;
}


