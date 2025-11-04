// Write a Program To Check If a Number Is a Strong Number.

#include <stdio.h>

int main()
{
    int num;
    int remainder;
    int factorial_sum = 0;
    int factorial = 1;
    int original_num;

    printf("Please Enter a Number To Know If It Is a Strong Number : ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        for (int i = 1; i <= remainder; i++)
        {
            factorial = factorial * i;
        }
        factorial_sum = factorial_sum + factorial;
        num = num / 10;
        factorial = 1;
    }

    if (factorial_sum == original_num)
    {
        printf("The Given Number %d Is a Strong Number", original_num);
    }
    else
    {
        printf("The Given Number %d Is Not a Strong Number", original_num);
    }

    return 0;
}