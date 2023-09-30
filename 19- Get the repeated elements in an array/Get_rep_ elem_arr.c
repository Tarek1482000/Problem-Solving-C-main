/*
 * Get the repeated elements in an array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Get_rep_elem_array(u8 *arr, u8 size,u8 *res)
{
	u8 s = size - 1 , res_counter = 0 ;

	for(u8 i =0;i<s;i++)
	{
		for(u8 j =i+1;j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				res[res_counter] = arr[i];
				res_counter++;
			}
		}
	}
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[]={1,6,1,2,6,3,2,3} , size = sizeof(arr)/sizeof(arr[0]);
	u8 res[size];


	for(u8 i=0;i<size;i++)
			res[i]=0;

	printf("array:");
	for(u8 i=0;i<size;i++)
		printf(" %d ",arr[i]);

	Get_rep_elem_array(arr,size,res);

	printf("\nRepeated elements:");
	for(u8 i=0;i<size;i++)
		printf(" %d ",res[i]);

	return 0;
}
