/*
 *  Sort an array and there is input variable to decide the way of sorting ascending or descending order.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;

#define  ASCENDING       0
#define  DEASCENDING     1


void sort_arr(u32 *arr, u8 size , u8 type)
{
	u8 temp = 0;;

	if(type == ASCENDING)
	{
		for(u8 i =0 ;i <size-1;i++)
		{
			for(u8 j = i+1 ;j <size;j++)
			{
				if(arr[i] > arr[j])
				{
					temp   = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		printf("Array after sorting ascending: ");
		for(u8 i =0 ;i <size;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n");

	}
	else if(type == DEASCENDING)
	{
		for(u8 i =0 ;i <size-1;i++)
		{
			for(u8 j = i+1 ;j <size;j++)
			{
				if(arr[i] < arr[j])
				{
					temp   = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		printf("Array after sorting descending:");
		for(u8 i =0 ;i <size;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n");
	}
}
int main(void)
{
	u32 arr[] = {13,2,3,0,1,34,5,9,4,2,63,72}, size = (sizeof(arr)/sizeof(*arr));
	setbuf(stdout,NULL);

	printf("Original Array:");
	for(u8 i =0 ;i <size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	sort_arr(arr, size, ASCENDING);
	sort_arr(arr, size, DEASCENDING);
	return 0;
}
