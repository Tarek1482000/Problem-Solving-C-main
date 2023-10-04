/*
 * Reserve a string (using iteration and recursion).c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Reve_array_iteration(u8 *arr, u8 size)
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


void Reve_array_recursion(u8 *arr, u8 start , u8 end)
{
	if(start >= end)
		return;

	u8 temp = arr[start];
	arr[start] = arr[end-1];
	arr[end-1] = temp;

	start++;
	end--;
	Reve_array_recursion(arr, start, end);
}


int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[]={1,2,3,4,5,6,7,8,9} , size = 0 ;

	size = sizeof(arr)/sizeof(arr[0]);

	printf("Original array:      ");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);

	Reve_array_iteration(arr, size);

	printf("\nNew array(iteration):");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);

	/*
	 * Return array to original values
	 */
	Reve_array_iteration(arr, size);

	Reve_array_recursion(arr,0,size);
	printf("\nNew array(recursion):");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);
	return 0;
}
