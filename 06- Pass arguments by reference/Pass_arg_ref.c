/*
 *  Pass arguments by reference.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;

void Dublicate_num(u32 *num)
{
	*num *= 2;
}
int main(void)
{
	setbuf(stdout,NULL);

	int num = 0 ,set_clr = 0 ,bit =0;

	while(1)
	{
		printf("Enter a Number\n");
		scanf("%d",&num);
		Dublicate_num(&num);
		printf("Your Number = %d\n",num);
		printf("\n****************************************\n");

	}
	return 0;
}


