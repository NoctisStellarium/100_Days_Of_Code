// Write a Program To Find The Product Of Odd Digits Of a Number.

#include <stdio.h>

int main()
{
    int num;
    int product = 1;
    int remainder;

    printf("Please Enter a Number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        if (remainder % 2 != 0)
        {
            product = product * remainder;
        }
        num = num / 10;
    }

    printf("Product of Odd Digits Is : %d", product);

    return 0;
}