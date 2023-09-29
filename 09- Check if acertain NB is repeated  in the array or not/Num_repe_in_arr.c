/*
 * Check if ascertain NB is repeated  in the array or not.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

u8 num_arry_rep(u8 *arr,u8 num,u8 size)
{
	u8 res = 0,count =0;
	for(u8 i =0;i<size;i++)
	{
		if(arr[i] == num)
		{
			count++;
			if(count == 2)
				return res = 2;
		}
	}
	if(count == 0)
		return res = 0;
	return res = 1;
}


int main(void)
{
	setbuf(stdout,NULL);
	u8 num = 0 ,size =0,arr[10]= {1,2,4,2,7,1,4,5};

	while(1)
	{
		printf("Enter a num to check if repeated\n");
		scanf("%d",&num);

		size = sizeof(arr)/sizeof(arr[0]);

		if(num_arry_rep(arr,num,size) == 0)
		{
			printf("Not Found\n");
		}
		else if(num_arry_rep(arr,num,size) == 1)
		{
			printf("Not Repeated\n");
		}
		else if(num_arry_rep(arr,num,size) == 2)
		{
			printf("Repeated\n");
		}
		printf("******************************\n");
	}
	return 0;
}


