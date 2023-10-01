/*
 *  Get the duplicated NB in an array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;



void get_dublicated_num_arr(u8 *arr,u8 size,u8 *res)
{
	u8 counter = 0 , dublicate = 1;
	for(u8 i =0 ; i<size -1 ; i++)
	{
		for(u8 j =i+1 ; j<size ; j++)
		{
			if(arr[i] == arr[j])
			{
				dublicate = 1;
				for(u8 k =0 ; k<size ;k++)
				{
					if(arr[i] == res[k])
					{
						dublicate = 0;
						break;
					}
				}

				if(dublicate)
				{
					res[counter] = arr[i];
					counter++;
				}

			}
		}
	}

}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[] = {1,2,3,4,5,2,4,2,3} , size = sizeof(arr)/sizeof(*arr), res[20] = {0} , counter =0;
	get_dublicated_num_arr(arr, size,res);

	printf("Array:");
	for(u8 i =0 ; i<size ; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	printf("Duplicated numbers:");
	while(res[counter] != 0)
	{
		printf(" %d ",res[counter]);
		counter++;
	}
	printf("\n");
	return 0;
}
