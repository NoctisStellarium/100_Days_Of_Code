// Write a Program to Display The Day Of The Week Based On a Number Using Switch Case.

#include <stdio.h>

int main()
{
    int day;

    printf("Please Enter a Number to Get the Corresponding Day of the Week : ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        {
            printf("Monday");
            break;
        }
        case 2:
        {
            printf("Tuesday");
            break;
        }
        case 3:
        {
            printf("Wednesday");
            break;
        }
        case 4:
        {
            printf("Thursday");
            break;
        }
        case 5:
        {
            printf("Friday");
            break;
        }
        case 6:
        {
            printf("Saturday");
            break;
        }
        case 7:
        {
            printf("Sunday");
            break;
        }
        default:
        {
            printf("Invalid Input Please Enter a Number Between 1 and 7");
        }
    }

    return 0;
}