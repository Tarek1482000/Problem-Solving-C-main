/*
 *  Print the binary of integer NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef long u32;

void Print_BN(u32 num)
{
	u32 mask = 0x80000000;

	for(u8 i =0 ;i<32;i++)
	{
		if((num<<i) & mask)
			printf("1");
		else
			printf("0");
	}
	printf("\n");

}


int main(void) {
	setbuf(stdout, NULL);

	u32 num = 0 ;

	for(;;)
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		Print_BN(num);
		printf("**********************************\n");
	}
	return 0;
}
