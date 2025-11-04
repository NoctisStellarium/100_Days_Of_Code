// Write a Program To Swap The First and Last Digit Of a Number.

#include <stdio.h>
#include <string.h>

int main()
{
    char number[64];

    printf("Please Enter a Number : ");
    scanf("%s", number);

    char temp = number[0];
    number[0] = number[strlen(number) - 1];
    number[strlen(number) - 1] = temp;

    printf("The New Number After Swapping The First and Last Digit Is : %s", number);

    return 0;
}