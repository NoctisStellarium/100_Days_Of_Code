// Write a Program To Input Two Numbers & Display Their Sum.

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The Sum Of %d & %d Is : %d", num1, num2, sum);

    return 0;
}