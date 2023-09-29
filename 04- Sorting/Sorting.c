/*
 * Sorting.c
 * Bubble sort
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;

int main(void)
{
	setbuf(stdout,NULL);

	u8 list = 0 , arr[20] , state=0 , temp = 0;

	while(1)
	{
		printf("Enter a Number of your List count\n");
		scanf("%d",&list);

		printf("Enter your Numbers :\n");
		for(u8 i =0;i<list;i++)
		{
			scanf("%d ",&arr[i]);
		}

		printf("Your unsorted  List:");
		for(u8 i =0;i<list;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n");


		do
		{
			state = 0 ;
			for(u8 i = 1;i<list;i++)
			{
				if(arr[i-1] > arr[i])
				{
					temp = arr[i];
					arr[i] = arr[i-1];
					arr[i-1]=temp;
					state = 1;
				}
			}
		}while(state);


		printf("Your bubble sorted  List:");
		for(u8 i =0;i<list;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n****************************************\n");

	}
	return 0;
}
