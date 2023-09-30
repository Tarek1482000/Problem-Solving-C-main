/*
 * Reverse an array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Reve_array(u8 *arr, u8 size)
{
	u8 temp = 0 , s = size -1;
	for(u8 i =0;i<size/2;i++)
	{
		temp   = arr[i];
		arr[i] = arr[s];
		arr[s] = temp;
		s = s-1;
	}
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[]={1,4,2,5,6,3,2,3} , size = 0;

	size = sizeof(arr)/sizeof(arr[0]);

	printf("Old array:");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);

	Reve_array(arr, size);

	printf("\nNew array:");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);

	return 0;
}
