/*
 *  Print_2D_array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;

#define  row 5
#define  col 5

void Print_2D_array(u8 arr[][5])
{
	printf("Array:\n");
	for(u8 i =0 ; i < row ; i++)
	{
		printf("{");
		for(u8 j =0 ; j<col ; j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("}\n");
	}
}

int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[][5] = {
			{1,5,0,4,1},
			{2,2,0,4,2},
			{3,2,0,4,3},
			{4,2,0,4,4},
			{5,2,0,4,5}};

	Print_2D_array(arr);



	return 0;
}
