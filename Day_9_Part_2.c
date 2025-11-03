// Write a Program That Accepts a Percentage and Assigns a Grade Accordingly.

#include <stdio.h>

int main()
{
    int percentage;

    printf("Please Enter Your Percentage : ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Your Grade is A");
    }
    else if (percentage >= 80 && percentage <= 89)
    {
        printf("Your Grade is B");
    }
    else if (percentage >= 70 && percentage <= 79)
    {
        printf("Your Grade is C");
    }
    else if (percentage >= 60 && percentage <= 69)
    {
        printf("Your Grade is D");
    }
    else if (percentage <= 59)
    {
        printf("Your Grade is F");
    }
    else
    {
        printf("Invalid Percentage Entered");
    }

    return 0;
}