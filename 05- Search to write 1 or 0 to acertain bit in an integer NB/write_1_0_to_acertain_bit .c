/*
 * Search to write 1 or 0 to ascertain bit in an integer NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;

int main(void)
{
	setbuf(stdout,NULL);

	int num = 0 ,set_clr = 0 ,bit =0;

	while(1)
	{
		printf("Enter a Number and 1 or 0 and bit\n");
		scanf(" %d %d %d",&num,&set_clr,&bit);


		if(set_clr == 1)
		{
			num |=(1<<bit);
		}
		else if(set_clr == 0)
		{
			num &=~(1<<bit);
		}

		printf("Your Number = %d\n",num);
		printf("\n****************************************\n");

	}
	return 0;
}
