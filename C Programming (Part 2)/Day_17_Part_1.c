// Write a Program To Check If a Number Is an Armstrong Number.

#include <stdio.h>

int main()
{
    int num;
    int original_num;
    int remainder;
    int reversed_num = 0;
    int number = 0;

    printf("Please Enter a Number to Check If It Is an Armstrong Number : ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num = num / 10;

        number = number + (remainder * remainder * remainder);
    }
    
    if (original_num == number)
    {
        printf("%d is an Armstrong Number", original_num);
    }
    else
    {
        printf("%d is Not an Armstrong Number", original_num);
    }

    return 0;
}