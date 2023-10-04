/*
 * Know if the Arch. is little or big endian.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;


int main(void)
{
	setbuf(stdout,NULL);

	u32 num = 0x0400000A;
	u8 *checker = &num;

	if(*checker == 10)
	{
		printf("Little endian\n");
	}
	else if(*checker == 4)
	{
		printf("Big endian\n");
	}
	return 0;
}
