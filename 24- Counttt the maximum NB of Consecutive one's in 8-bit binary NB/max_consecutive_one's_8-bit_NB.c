/*
 *  Count the maximum NB of Consecutive one's in 8-bit binary NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;



u8 max_ones_in_Num(u32 num)
{
	u8 max = 0 , counter = 0;
	u32 mask = 0x80000000;
	printf("Enter your number as a binary: ");

	for(u8 i =0 ; i<32 ; i++)
	{
		if((num<<i) & mask)
		{
			printf("1");
			counter++;
			if(counter > max)
				max = counter;
		}
		else
		{
			counter = 0;
			printf("0");
		}
	}
	printf("\n");


	return max;
}

int main(void)
{
	setbuf(stdout,NULL);

	u32 num = 0 , max = 0;

	while(1)
	{
		printf("Enter your number\n");
		scanf("%d",&num);

		max = max_ones_in_Num(num);
		printf("Max number of ones = %d\n",max);
		printf("************************************\n");
	}
	return 0;
}
