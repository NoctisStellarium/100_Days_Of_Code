// Write a Program To Input an Integer and Check Whether It Is Positive, Negative or Zero Using Nested If Else Conditions.

#include <stdio.h>

int main()
{
    int num;
    
    printf("Please Enter a Number : ");
    scanf("%d", &num);

    if (num != 0)
    {
        if (num > 0)
        {
            printf("The Given Number %d Is Positive", num);
        }
        else
        {
            printf("The Given Number %d Is Negative", num);
        }
    }
    else
    {
        printf("The Given Number Is 0");
    }

    return 0;
}