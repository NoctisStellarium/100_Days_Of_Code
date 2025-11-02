// Write a Program to Input a Year and Check Whether It Is a Leap Year or Not Using Conditional Statements.

#include <stdio.h>

int main()
{

    int year;

    printf("Please Enter a Year To Check Whether It Is a Leap Year Or Not : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The Given Year %d Is a Leap Year", year);
    }
    else
    {
        printf("The Given Year %d Is a Not Leap Year", year);
    }
    
    return 0;
}