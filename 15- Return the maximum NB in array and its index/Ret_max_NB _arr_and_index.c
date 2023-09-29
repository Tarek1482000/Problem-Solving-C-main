/*
 * Return the maximum NB in array and its index.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

u8 Max_arr_num(u8 *arr,u8 size)
{
	u8 index =0 , state =0;

	do
	{
		state = 0;
		for(u8 i=1;i<size;i++)
		{
			if(arr[index] < arr[i])
			{
				index = i;
				state = 1;
			}

		}
	}while(state == 1);
	return index;
}
int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[5] = {1,10,50,3,9},res =0;

	printf("Your List:");
	for(u8 i =0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	res = Max_arr_num(arr, 5);
	printf("Max in the List: %d , and index: %d\n",arr[res],res);


	return 0;
}
