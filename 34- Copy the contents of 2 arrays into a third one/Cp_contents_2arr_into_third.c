/*
 *  Copy the contents of 2 arrays into a third one.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


void cp_2array_to_new_arr(u32 *arr1 , u8 size1,u32 *arr2 , u8 size2,u32 *arr3_combination , u8 size3)
{
	u8 first_index = 0 , j =0;
	while(arr3_combination[first_index] != 0)
		first_index ++;

	for(u8 i= first_index;i<size1+first_index;i++)
	{
		arr3_combination[i] = arr1[j];
		j++;
	}

	j = 0;
	for(u8 i= size1+first_index;i<size1+size2+first_index;i++)
	{
		arr3_combination[i] = arr2[j];
		j++;
	}
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 arr1[] = {8,2,3,4,3,5,2,2,4,0}, arr2[] = {1,5,2,5,6,7,3,5,2,2};
	u8 size1 = sizeof(arr1)/sizeof(*arr1) ,	size2 = sizeof(arr2)/sizeof(*arr2), size3 = size1+size2+10;

	u32 arr3_combination[size3];

	printf("Arr1:");
	for(u8 i =0 ;i<size1;i++)
		printf(" %d ",arr1[i]);
	printf("\n");

	printf("Arr2:");
	for(u8 i =0 ;i<size2;i++)
		printf(" %d ",arr2[i]);
	printf("\n");


	printf("Arr3 now:              ");
	arr3_combination[0] = 1;
	arr3_combination[1] = 2;
	arr3_combination[2] = 3;
	printf(" %d ",arr3_combination[0]);
	printf(" %d ",arr3_combination[1]);
	printf(" %d ",arr3_combination[2]);
	for(u8 i =3 ;i<size3;i++)
	{
		arr3_combination[i] = 0;
		printf(" %d ",arr3_combination[i]);
	}
	printf("\n");



	cp_2array_to_new_arr(arr1, size1, arr2, size2, arr3_combination, size3);
	printf("Arr3 after combination:");
	for(u8 i =0 ;i<size3;i++)
		printf(" %d ",arr3_combination[i]);
	printf("\n");
	return 0;
}
