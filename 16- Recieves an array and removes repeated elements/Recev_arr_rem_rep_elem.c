/*
 * Receives an array and removes repeated elements.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void arr_remove_rep_ele(u8 *arr,u8 size)
{
	u8 shift = 0 ;
	for(u8 i=0;i<size-1;i++)
	{
		for(u8 j=i+1;j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}

	printf("Removed repeated element: ");
	for(u8 i =0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	for(u8 i=0;i<size-1;i++)
	{
		if(arr[i] == 0)
		{
			shift = i;
			for(u8 j=i+1;j<size;j++)
			{
				if(arr[j] == 0)
					continue;

				arr[shift] = arr[j];
				arr[j] = 0;
				shift++;
			}
		}
	}
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[] = {1,2,0,50,3,9,4,0,3,2,23} , size = sizeof(arr)/sizeof(arr[0]);

	printf("Your List:                ");
	for(u8 i =0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");


	arr_remove_rep_ele(arr, size);
	printf("New List:                 ");
	for(u8 i =0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	return 0;
}
