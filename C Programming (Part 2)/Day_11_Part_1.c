// Write a Program To Display The Month Name and Number Of Days Using Switch Case For a Given Month Number.

#include <stdio.h>

int main()
{
    int month_number;

    printf("Please Enter Month Number To Know More Details : ");
    scanf("%d", &month_number);

    switch(month_number)
    {
        case 1:
        {
            printf("January Has 31 Days");
            break;
        }
        case 2:
        {
            printf("February Has 28 Days (In A Non Leap Year) and 29 Days (In A Leap Year)");
            break;
        }
        case 3:
        {
            printf("March Has 31 Days");
            break;
        }
        case 4:
        {
            printf("April Has 30 Days");
            break;
        }
        case 5:
        {
            printf("May Has 31 Days");
            break;
        }
        case 6:
        {
            printf("June Has 30 Days");
            break;
        }
        case 7:
        {
            printf("July Has 31 Days");
            break;
        }
        case 8:
        {
            printf("August Has 31 Days");
            break;
        }
        case 9:
        {
            printf("September Has 30 Days");
            break;
        }
        case 10:
        {
            printf("October Has 31 Days");
            break;
        }
        case 11:
        {
            printf("November Has 30 Days");
            break;
        }
        case 12:
        {
            printf("December Has 31 Days");
            break;
        }
        default:
        {
            printf("Invalid Month Number Please Enter A Valid Month Number Between 1 and 12");
            break;
        }
    }

    return 0;
}