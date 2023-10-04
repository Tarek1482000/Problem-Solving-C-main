/*
 *  Swap two arrays with different lenghs.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;


void swap(u32 *arr1,u32 *arr2)
{
	u32 temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;

}
void Swap_2array(u32 *arr1,u32 *arr2,u32 size1 ,u32 size2)
{

	if(size1 > size2)
	{
		for(u32 i=0;i<size2;i++)
		{
			swap(&arr1[i], &arr2[i]);
		}
	}
	else
	{
		for(u32 i=0;i<size1;i++)
		{
			swap(&arr1[i], &arr2[i]);
		}
	}
}


int main(void)
{
	setbuf(stdout, NULL);

	u32 arr1[] = {1,2,3,4,6} , arr2[] = {10,11,12,13,14,7,8,9}
	, size1 = sizeof(arr1)/sizeof(*arr1) , size2 = sizeof(arr2)/sizeof(*arr2);

	printf("Before swap:\nArr1:");
	for(u32 i = 0 ; i< size1 ; i++)
	{
		printf(" %d ",arr1[i]);
	}
	printf("\nArr2:");
	for(u32 i = 0 ; i< size2 ; i++)
	{
		printf(" %d ",arr2[i]);
	}
	Swap_2array(arr1, arr2, size1, size2);

	printf("\nAfter swap:\nArr1:");
	for(u32 i = 0 ; i< size1 ; i++)
	{
		printf(" %d ",arr1[i]);
	}
	printf("\nArr2:");
	for(u32 i = 0 ; i< size2 ; i++)
	{
		printf(" %d ",arr2[i]);
	}
	return 0;
}
