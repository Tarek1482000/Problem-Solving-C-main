/*
 *  Count two 8 bits numbers and return the result.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 count_8bit(u8 num1, u8 num2)
{
    return num1 + num2;
}

int main(void)
{
    setbuf(stdout, NULL);

    u8 num1 = 0, num2 = 0, res = 0;

    for (;;)
    {
        printf("Enter two numbers\n");
        scanf("%hhu%hhu", &num1, &num2);

        res = count_8bit(num1, num2);
        printf("The Result: %d\n", res);
        printf("**********************************\n");
    }
    return 0;
}


