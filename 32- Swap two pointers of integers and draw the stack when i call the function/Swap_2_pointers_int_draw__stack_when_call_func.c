/*
 *  Swap two pointers of integers and draw the stack when i call the function.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned int  u32;


void Swap_2_ptr(u32 *ptr1,u32 *ptr2)
{
	u8 temp = 0;
	temp  = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


int main(void)
{
	setbuf(stdout,NULL);

	u32 *ptr1 = NULL,*ptr2 = NULL;

	u32 var1 = 1 , var2 = 2;

	ptr1 = &var1;
	ptr2 = &var2;
	printf("Stack Before Swap:\n");
	printf("                  ptr2 ==> %d\n",*ptr2);
	printf("                  ptr1 ==> %d\n",*ptr1);

	Swap_2_ptr(ptr1, ptr2);

	printf("Stack After Swap:\n");
	printf("                  ptr2 ==> %d\n",*ptr2);
	printf("                  ptr1 ==> %d\n",*ptr1);

	return 0;
}
