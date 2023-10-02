/*
 *  Swap elements of 2 arrays according to the smallest array in size.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


u8 array_min_index(u32 *arr , u8 size)
{
	u32 min = 0xFFFFFFFF;
	u8 index = 0;

	for(u8 i=0;i<size;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}

void Swap_2_smallest_elem_2arrays(u32 *arr1,u32 *arr2 , u8 size1 , u8 size2)
{
	u8 arr1_index = array_min_index(arr1, size1);
	u8 arr2_index = array_min_index(arr2, size2);

	u8 temp = arr1[arr1_index];

	arr1[arr1_index] = arr2[arr2_index];

	arr2[arr2_index] = temp;


	printf("*********************************************************\n");
	printf("The Mini in Array1: %d , Index: %d\n",arr1[arr1_index],arr1_index);
	printf("The Mini in Array2: %d , Index: %d\n",arr2[arr2_index],arr2_index);
	printf("*********************************************************\n");
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 arr1[] = {8,2,3,4,3,5,2,2,4,0}, arr2[] = {1,5,2,5,6,7,3,5,2,2};

	u8 size1 = sizeof(arr1)/sizeof(*arr1) ,	size2 = sizeof(arr2)/sizeof(*arr2);

	printf("Before swap:\nArr1:");
	for(u8 i =0 ;i<size1;i++)
		printf(" %d ",arr1[i]);
	printf("\n");

	printf("Arr2:");
	for(u8 i =0 ;i<size2;i++)
		printf(" %d ",arr2[i]);
	printf("\n");

	Swap_2_smallest_elem_2arrays(arr1, arr2, size1, size2);

	printf("After swap:\nArr1:");
	for(u8 i =0 ;i<size1;i++)
		printf(" %d ",arr1[i]);
	printf("\n");

	printf("Arr2:");
	for(u8 i =0 ;i<size2;i++)
		printf(" %d ",arr2[i]);
	printf("\n");
	return 0;
}
