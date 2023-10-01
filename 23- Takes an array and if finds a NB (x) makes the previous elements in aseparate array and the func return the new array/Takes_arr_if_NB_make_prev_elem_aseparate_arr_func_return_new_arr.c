/*
 *  Takes an array and if finds a NB (x) makes the previous
 *  elements in a separate array and the func return the new array.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;



u8 remove_prev_elem(u32 *arr, u8 size , u8 *removed_elem ,u8 elem)
{
	u8 last = 0;
	if(elem == arr[0])
		return 1;

	for(u8 i=0;i<size;i++)
	{
		if(elem == arr[i])
		{
			*removed_elem = arr[i-1];

			for(u8 j=(i-1);j<size-1;j++)
			{
				arr[j] = arr[j+1];
				last = j;
			}
			arr[last+1] = 0;
			return 2 ;
		}
	}
	return 0 ;
}
int main(void)
{
	setbuf(stdout,NULL);
	u32 arr[] = {13,2,3,0,1,34,5,9,4,2,63,72}, size = (sizeof(arr)/sizeof(*arr));
	u8 removed_elem[1] = {0};
	u32 elem = 0 , state = 0;

	printf("Original Array:");
	for(u8 i =0 ;i <size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");

	while(1)
	{
		printf("Enter your element\n");
		scanf("%d",&elem);

		state = remove_prev_elem(arr, size, removed_elem,elem);

		if(state == 0)
		{
			printf("Your element not found\n");
		}
		else if(state == 1)
		{
			printf("Your element is in first place in  the array\n");
		}
		else if(state == 2)
		{
			printf("Removed Element = %d\n",removed_elem[0]);

			printf("Array after removing previous element:");
			for(u8 i =0 ;i <size;i++)
			{
				printf(" %d ",arr[i]);
			}
			printf("\n");
		}
		printf("************************************\n");
	}
	return 0;
}
