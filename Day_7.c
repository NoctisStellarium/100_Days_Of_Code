// Write a Program to Input a Year and Check Whether it is a Leap Year or Not Using Conditional Statements

#include <stdio.h>

int main() {
    
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a LYeap ear.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}