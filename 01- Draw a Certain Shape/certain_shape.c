/*
 * certain_shape.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char  u8;

int main(void)
{
	setbuf(stdout,NULL);

	u8 lines1 =0 , lines2;

	printf("Enter The Number of the Lines\n");
	scanf("%d",&lines1);
	lines2 =lines1;

	for(u8 i=0;i<lines1;i++)
	{
		for(u8 j=0;j<lines2;j++)
		{
			printf("*");
		}
		printf("\n");
		lines2--;

	}
	return 0;
}
