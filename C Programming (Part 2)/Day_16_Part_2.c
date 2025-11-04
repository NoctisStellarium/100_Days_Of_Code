// Write a Program to Check If a Number Is a Palindrome.

#include <stdio.h>

int main()
{
    int num;
    int original_num;
    int reversed_num = 0;
    int remainder;

    printf("Please Enter a Number To Check If It Is a Palindrome : ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num = num / 10;
    }

    if (original_num == reversed_num)
    {
        printf("%d is a Palindrome Number", original_num);
    }
    else
    {
        printf("%d is Not a Palindrome Number", original_num);
    }
    
    return 0;
}