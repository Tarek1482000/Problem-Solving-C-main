/*
 *  Take one NB and called by the app many times, return the min NB from the first call.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;

u32 arr[10];
u8 size = sizeof(arr)/sizeof(*arr);


u32 Get_min_Entered_num(u32 num)
{
	static u8 counter = 0;
	u32 min = 0x7FFFFFFF;

	arr[counter] = num;
	if(counter == size - 1)
		counter = 0;
	else
		counter++;

	for(u8 i=0;i<size;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 num = 0 , min_num = 0;

	for(u8 i=0;i<size;i++)
	{
		arr[i] = 0x7FFFFFF1;
	}

	for(;;)
	{
		printf("Enter the number\n");
		scanf("%d",&num);
		min_num = Get_min_Entered_num(num);
		printf("min_num = %d\n",min_num);
		printf("********************************\n");
	}
	return 0;
}
