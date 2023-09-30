/*
 * Return the multiplication and sum of two variables.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void multi_sum_two_var(u8 var1,u8 var2 , u8 *sum, u8 *multi)
{
	*sum   = var1 + var2;
	*multi = var1 * var2;
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 var1 = 5 , var2 = 3 , sum = 0 ,multi = 0;
	multi_sum_two_var(var1, var2, &sum, &multi);
	printf("sum = %d\nmulti = %d\n",sum,multi);

	return 0;
}
