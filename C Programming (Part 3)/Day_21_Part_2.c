// Write a Program To Check If a Number Is a Perfect Number.

#include <stdio.h>

int main()
{
    int num;
    int factor_sum = 0;

    printf("Please Enter a Number To Check If It Is a Perfect Number : ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            factor_sum = factor_sum + i;
        }
    }

    if (factor_sum == num)
    {
        printf("%d Is a Perfect Number", num);
    }
    else
    {
        printf("%d Is Not a Perfect Number", num);
    }

    return 0;
}