/*
 * Check if string mirror or not.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned long  u32;


u8 Check_str_mirr(u8 *arr,u8 size)
{
	u8 s = size - 2;
	size = size/2;

	for(u8 i =0;i<size;i++)
	{
		if(arr[i] != arr[s])
			return 0;
		s--;
	}
	return 1;
}
int main(void)
{
	setbuf(stdout,NULL);

	u8 arr[] = "level";
	u8 size = 0 ,res = 0;

	size = (sizeof(arr)/sizeof(arr[0]));

	res = Check_str_mirr(arr,size);

	if(res)
		printf("String is mirror\n");
	else
		printf("String is not mirror\n");

	return 0;
}


