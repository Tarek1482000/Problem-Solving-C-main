/*
 *  Return the prime NB start from zero to certain NB.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 is_prime(u32 num)
{
	if (num <= 1)
	{
		return 2;  // 0 and 1 are not prime
	}
	for (u32 i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;  // Found a divisor, not prime
		}
	}
	return 1;  // It's prime
}

int main(void) {
	setbuf(stdout, NULL);

	u32 num = 0;

	for(;;)
	{
		printf("Enter a number\n");
		scanf("%d", &num);

		printf("Prime numbers:");

		if (is_prime(num) == 2)
		{
			printf("None");
		}
		else
		{
			for (u32 i = 2; i <= num; i++)
			{
				if (is_prime(i) == 1)
				{
					printf(" %d ", i);
				}
			}
		}

		printf("\n********************************\n");
	}

	return 0;
}
