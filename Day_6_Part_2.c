// Write a Program to Input an Integer and Check Whether it is Positive, Negative or Zero Using Nested If Else Statement.

#include <stdio.h>

int main() {

    int number;
    printf("Enter an Integer: ");
    scanf("%d", &number);

    if (number >= 0) {
        if (number == 0) {
            printf("The Number is Zero.\n");
        } else {
            printf("The Number is Positive.\n");
        }
    } else {
        printf("The Number is Negative.\n");
    }

    return 0;
}