/*
 *  Get the maximum repeated element in arr.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;



u8 get_max_repet_num_arr(u8 *arr,u8 size)
{
	u8 max = 0 , max_repe = 0 , counter = 0;
	for(u8 i =0 ; i<size -1 ; i++)
	{
		counter = 0;
		for(u8 j =i+1 ; j<size ; j++)
		{
			if(arr[i] == arr[j])
			{
				counter ++;
			}
		}
		if(max < counter)
		{
			max = counter;
			max_repe = arr[i];
		}
	}
	return max_repe;
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[] = {3,2,4,3,5,2,4,3,4} , size = sizeof(arr)/sizeof(*arr), max_repe =0;

	printf("Array:");
	for(u8 i =0 ; i<size ; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	max_repe = get_max_repet_num_arr(arr, size);

	printf("Max Repeated number: %d\n",max_repe);

	return 0;
}
