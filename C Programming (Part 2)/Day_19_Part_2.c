// Write a Program To Find The Sum Of Digits Of a Number.

#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int remainder;

    printf("Please Enter a Number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("The Sum of Digits Is : %d", sum);

    return 0;
}