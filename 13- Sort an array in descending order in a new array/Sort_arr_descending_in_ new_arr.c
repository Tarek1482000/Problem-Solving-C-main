/*
 * Sort an array in descending order in a new array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void sort_descending(u8 *arr1,u8 *arr2,u8 size)
{
	u8 state =0 ,temp =0;

	for(u8 i=0;i<size;i++)
	{
		arr2[i] = arr1[i];
	}

	do
	{
		state = 0 ;
		for(u8 i=1;i<size;i++)
		{
			if(arr2[i-1] < arr2[i])
			{
				temp = arr2[i];
				arr2[i] = arr2[i-1];
				arr2[i-1]=temp;
				state = 1;
			}
		}
	}while(state);


}
int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[5] = {1,0,5,3,9}
	,arr_new[5];


	sort_descending(arr, arr_new, 5);
	printf("Your List:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");


	printf("Your descending sorted New  List:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr_new[i]);
	}

	return 0;
}
