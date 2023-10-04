/*
 *  Swap 3 digits cyclic (Ex. 235 will be 523 - 532 - 325 - 352 -253).c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;


void get_num_3digits(u32 num , u8 *digits);
void sum_3digits(u8 d1, u8 d2 , u8 d3 , u32 *res);
u8 remove_elem(u32 *arr,u8 size);

void swap_num_3digits(u32 num , u32 *res)
{
	u8 digit[3] = {0};
	if(num > 999)
		return;

	get_num_3digits(num, digit);
	sum_3digits(digit[2], digit[0], digit[1], &res[0]);
	sum_3digits(digit[2], digit[1], digit[0], &res[1]);
	sum_3digits(digit[1], digit[0], digit[2], &res[2]);
	sum_3digits(digit[1], digit[2], digit[0], &res[3]);
	sum_3digits(digit[0], digit[2], digit[1], &res[4]);
}


int main(void) {
	setbuf(stdout, NULL);

	u32 num = 0 , res [5]= {0} ,size = 0;

	for(;;)
	{
		printf("Enter a number of 3 digit\n");
		scanf("%d",&num);

		swap_num_3digits(num, res);
		size = remove_elem(res, 5);

		printf("The Result:");
		for(u8 i = 0;i<size;i++)
		{
			printf(" %d ",res[i]);
			res[i] = 0;
		}
		printf("\n**********************************\n");
	}
	return 0;
}



void get_num_3digits(u32 num , u8 *digits)
{
	for(int i=2;i>=0;i--)
	{
		digits[i] += num % 10;
		num /= 10;
	}
}

void sum_3digits(u8 d1, u8 d2 , u8 d3 , u32 *res)
{
	*res = 0;

	*res = d1;
	*res *= 10;
	*res += d2;
	*res *= 10;
	*res += d3;
}

u8 remove_elem(u32 *arr,u8 size)
{
	u8 new_size = 0 , shift = 0 ;

	for(u8 i=0;i<size-1;i++)
	{
		for(u8 j=i+1;j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}



	for(u8 i=0;i<size-1;i++)
	{
		if(arr[i] == 0)
		{
			shift = i;
			for(u8 j=i+1;j<size;j++)
			{
				if(arr[j] == 0)
					continue;

				arr[shift] = arr[j];
				arr[j] = 0;
				shift++;
			}
		}
	}

	while(arr[new_size] != 0)
		new_size++;
	return new_size;
}
