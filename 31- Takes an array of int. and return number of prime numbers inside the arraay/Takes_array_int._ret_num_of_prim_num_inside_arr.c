/*
 *  Takes an array of int. and return number of prime numbers inside the array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


u8 num_prime_num(u32 *arr,u8 size)
{
	u8 counter = 0 , flag = 0;


	for(u8 i=0;i<size;i++)
	{
		if(arr[i] < 2)
		{

		}
		else if(arr[i] == 2 || arr[i] == 3)
		{
			counter++;
		}
		else if(arr[i] > 3)
		{
			flag = 1;
			for(u8 j=2;j<arr[i];j++)
			{
				if((arr[i] % j) == 0)
				{
					flag = 0;
					break;
				}
			}
			if(flag )
				counter++;
		}
	}
	return counter;
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 arr[] = {2, 3, 5, 7, 11, 13, 19, 23} , size = sizeof(arr)/sizeof(*arr);

	u8 res = 0;
	printf("Array: ");
	for(u8 i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	res = num_prime_num(arr , size);

	printf("Number of prime numbers: %d\n",res);

	return 0;
}
