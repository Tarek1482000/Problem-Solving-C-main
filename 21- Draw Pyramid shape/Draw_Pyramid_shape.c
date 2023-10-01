/*
 *  Draw Pyramid shape.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

int main(void)
{
	int n = 0 ;
	setbuf(stdout,NULL);

	while(1)
	{
		printf("Enter the Size\n");
		scanf("%d",&n);
		for(u8 i=0; i<n; i++)
		{
			for(u8 j=0; j<(n-i-1); j++)
			{
				printf(" ");
			}
			for(u8 k=0; k<=(i*2); k++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("**************************************\n");
	}
	return 0;
}
