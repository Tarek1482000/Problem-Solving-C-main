/*
 * Get_NB_of_0.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char  u8;

int main(void)
{
	setbuf(stdout,NULL);

	int num = 0 , result = 0 , mask = 0x80000000;

	while(1)
	{
		printf("Enter a Number\n");
		scanf("%d",&num);

		for(u8 i =0 ;i < 32 ;i++)
		{
			if((num<<i)&(mask))
			{
				printf("%d",1);

			}
			else
			{
				printf("%d",0);
				result++;
			}
		}

		printf("\nNumber of Zeros = %d\n",result);
		result =0;
	}
	return 0;
}
