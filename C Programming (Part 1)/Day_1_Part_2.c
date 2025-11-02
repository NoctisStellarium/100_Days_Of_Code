// Write a Program to Input Two Numbers and Display Their Sum, Difference, Product and Quotient.

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    int quotient;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The Sum Of %d & %d Is : %d\n", num1, num2, sum);

    difference = num1 - num2;
    printf("The Difference Of %d & %d Is : %d\n", num1, num2, difference);

    product = num1 * num2;
    printf("The Product Of %d & %d Is : %d\n", num1, num2, product);

    if (num2 == 0)
    {
        printf("Division Is Not Defined");
    }
    else
    {
        quotient = num1 / num2;
        printf("The Quotient Of %d & %d Is : %d", num1, num2, quotient);
    }
    return 0;
}