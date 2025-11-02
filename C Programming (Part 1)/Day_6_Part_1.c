// Write a Program To Input an Integer and Check Whether It Ss Even Or Odd Using If Else Conditions.

#include <stdio.h>

int main()
{
    int num;

    printf("Please Enter a Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The Given Number %d Is Even", num);
    }
    else
    {
        printf("The Given Number %d Is Odd", num);
    }

    return 0;
}