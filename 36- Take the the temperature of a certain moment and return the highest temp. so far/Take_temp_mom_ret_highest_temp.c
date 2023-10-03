/*
 *  Take the the temperature of a certain moment and return the highest temp.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


u32 Get_max_temp(u32 temp)
{

	static u32 arr[10] = {0}, counter = 0;
	u8 size = sizeof(arr)/sizeof(*arr);
	u32 max = 0;

	arr[counter] = temp;
	if(counter<size)
		counter++;
	else
		counter = 0;

	for(u8 i=0;i<size;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 temp = 0 , max_temp = 0;

	for(;;)
	{
		printf("Enter the current temperature\n");
		scanf("%d",&temp);
		max_temp = Get_max_temp(temp);
		printf("Max temperature = %d\n",max_temp);
		printf("********************************\n");
	}
	return 0;
}
