// Write a Program to Display the Day of the Week on a Number (1 - 7) Using Switch Case.

#include <stdio.h>

int main() {

    int day;

    printf("Enter a Number to Get the Corresponding Day of the Week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input, Please Enter a Number Between 1 and 7.\n");
    }

    return 0;
}


