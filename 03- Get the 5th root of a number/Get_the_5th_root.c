/*
 * Get_the_5th_root.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
#include <math.h>
typedef unsigned char  u8;

int main(void)
{
	setbuf(stdout,NULL);

	float num = 0 , result = 0 ,root = 1.0/5.0;

	while(1)
	{
		printf("Enter a Number\n");
		scanf("%f",&num);

		result = pow(num,root) ;

		printf("The 5th root of the number = %f\n",result);
		printf("*******************************************\n");
		result =0;
	}
	return 0;
}
