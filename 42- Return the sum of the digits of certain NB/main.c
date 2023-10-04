/*
 *  Return the sum of the digits of certain NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 sum_num_digits(u32 num)
{
	u8 result = 0;

	while(num)
	{
		result += num % 10;
		num /= 10;
	}
	return result;
}


int main(void) {
	setbuf(stdout, NULL);

	u32 num = 0 ;
	u8 res = 0;

	for(;;)
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		res = sum_num_digits(num);
		printf("The sum of number digits = %d\n",res);
		printf("**********************************\n");
	}
	return 0;
}
