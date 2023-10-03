/*
 *  Print the max-NB.s of zeros between two one's in binary of integer NR.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

void Print_BN(u32 num)
{
	u32 mask = 0x80000000;

	for(u8 i =0 ;i<32;i++)
	{
		if((num<<i) & mask)
			printf("1");
		else
			printf("0");
	}
	printf("\n");

}

u8 max_zero_between_ones(u32 num)
{
	u8 counter = 0 , max = 0;
	u8 start = 0;

	for(u8 i=0;i<32;i++)
	{
		if(((num>>i) & 1) == 1)
		{
			start = 1;
			if(counter > max)
				max = counter;
			counter = 0;
		}
		else if((((num>>i) & 1) == 0) && start)
		{
			counter++;
		}

	}
	return max;
}

int main(void) {
	setbuf(stdout, NULL);

	u32 num = 0 ;
	u8 result =0;

	for(;;)
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		result = max_zero_between_ones(num);
		Print_BN(num);
		printf("Max num of zeros = %d\n",result);
		printf("**********************************\n");
	}
	return 0;
}
