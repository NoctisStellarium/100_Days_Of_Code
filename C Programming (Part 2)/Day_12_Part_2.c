// Write a Program To Calculate Electricity Bill Based On Units Consumed With These Rates.

#include <stdio.h>

int main()
{
    int units;
    int bill;

    printf("Enter the Number Of Units Consumed : ");
    scanf("%d", &units);

    if (units == 0)
    {
        printf("Your Bill Is : 0");
    }
    else if (units >= 1 && units <= 100)
    {
        bill = units * 5;
        printf("Your Bill Is : %d", bill);
    }
    else if (units >= 101 && units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Your Bill Is : %d", bill);
    }
    else if (units >= 201 && units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Your Bill Is : %d", bill);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("Your Bill Is : %d", bill);
    }

    return 0;
}