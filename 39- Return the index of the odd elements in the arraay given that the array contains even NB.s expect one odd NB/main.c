/*
 *  Return the index of the odd elements in the array given
 *  that the array contains even NB.s expect one odd NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 odd_indx(u32 *arr,u8 size)
{
	for(u8 i =0 ;i<size;i++)
		if((arr[i] % 2) != 0)
			return i;
	return -1;
}

int main(void) {
	setbuf(stdout, NULL);

	u32 arr[] = {2,4,6,8,1,10} ;
	u8 size = sizeof(arr)/sizeof(*arr),res = 0;

	res = odd_indx(arr, size);

	printf("Array:");
	for(u8 i =0 ;i<size;i++)
		printf(" %d ",arr[i]);

	printf("\nOdd element: %d , index: %d",arr[res],res);
	return 0;
}
