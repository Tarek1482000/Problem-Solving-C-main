/*
 *  Sort an array and put the result in a new array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


void sort_arr(u8 *arr,u8 *res, u8 size)
{
	u8 temp = 0;

	for(u8 i=0;i<size;i++)
		res[i] = arr[i];


	for(u8 i=0;i<size-1;i++)
	{
		for(u8 j=i+1;j<size;j++)
		{
			if(res[i] >= res[j])
			{
				temp   = res[i];
				res[i] = res[j];
				res[j] = temp;

			}
		}
	}
}


int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[] = {1,7,3,2,4,6,8,9,5,0} , size = sizeof(arr)/sizeof(*arr);
	u8 res[size];

	printf("Original Array: ");
	for(u8 i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	sort_arr(arr, res , size);

	printf("New Array:      ");
	for(u8 i=0;i<size;i++)
	{
		printf(" %d ",res[i]);
	}
	printf("\n");
	return 0;
}
