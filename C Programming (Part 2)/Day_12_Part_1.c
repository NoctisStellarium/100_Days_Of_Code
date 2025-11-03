// Write a Program to Calculate Library Fine Based on Late Day Accordingly.

#include <stdio.h>

int main()
{
    int late_days;
    int fine;

    printf("Please Enter The Number Of Late Days : ");
    scanf("%d", &late_days);

    if (late_days == 0)
    {
        printf("You Have No Fine");
    }
    else if (late_days >= 1 && late_days <= 5)
    {
        fine = late_days * 2;
        printf("Your Fine Is : %d", fine);
    }
    else if (late_days >= 6 && late_days <= 10)
    {
        fine = 10 + ((late_days - 5)* 4);
        printf("Your Fine Is : %d", fine);
    }
    else if (late_days >= 11 && late_days <= 30)
    {
        fine = 10 + 20 + ((late_days - 10) * 6);
        printf("Your Fine Is : %d", fine);
    }
    else
    {
        printf("Your Membership Is Cancelled");
    }

    return 0;
}