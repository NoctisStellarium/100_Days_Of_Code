// Write a Program To Reverse a Given Number.

#include <stdio.h>

int main()
{
    int num;
    int reversed = 0;
    int remainder;

    printf("Please Enter a Number To Reverse : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("The Reversed Number Is : %d", reversed);

    return 0;
}