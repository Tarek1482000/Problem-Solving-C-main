/*
 * Swap two array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Swap(u8 *arr1, u8 *arr2,u8 size)
{
	u8 temp[100];

	for(u8 i =0;i<size;i++)
	{
		temp[i] = arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];
	}

}
int main(void)
{
	setbuf(stdout,NULL);

	u8 arr1[5] ={1,2,3,4,5}
	,arr2[5]={11,12,13,14,15}
	,size = 0;

	if((sizeof(arr1)/sizeof(arr1[0])) >= (sizeof(arr2)/sizeof(arr2[0])))
	{
		size = (sizeof(arr1)/sizeof(arr1[0]));
	}
	else
	{
		size = (sizeof(arr2)/sizeof(arr2[0]));
	}

	printf("Before Swap:\nArr1:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr1[i]);
	}

	printf("\nArr2:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr2[i]);
	}

	Swap(arr1, arr2,size);

	printf("\nAfter Swap:\nArr1:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr1[i]);
	}

	printf("\nArr2:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr2[i]);
	}
	return 0;
}


