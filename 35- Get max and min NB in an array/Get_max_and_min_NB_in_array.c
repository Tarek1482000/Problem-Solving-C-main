/*
 *  Get max and min NB in an array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


void Get_max_and_min_NB_in_array(u32 *arr , u8 size, u32 *max , u32 *min)
{
	*min = 0xFFFFFFFF;
	*max = 0;
	for(u8 i =0;i<size;i++)
	{
		if(arr[i] < *min)
		{
			*min = arr[i];
		}
	}

	for(u8 i =0;i<size;i++)
	{
		if(arr[i] > *max)
		{
			*max = arr[i];
		}
	}
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 arr[] = {8,2,3,4,3,5,1,2,4,9} , max = 0, min =0;
	u8 size = sizeof(arr)/sizeof(*arr);


	printf("Arr:");
	for(u8 i =0 ;i<size;i++)
		printf(" %d ",arr[i]);
	printf("\n");

	Get_max_and_min_NB_in_array(arr, size, &max, &min);

	printf("Max number = %d\n",max);
	printf("Min number = %d\n",min);

	return 0;
}
