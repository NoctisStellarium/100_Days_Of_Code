// Write a Program To Calculate The Factorial Of a Number.

#include <stdio.h>

int main()
{
    int number;
    int product = 1;

    printf("Please Enter a Positive Integer : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        product = product * i;
    }

    printf("Factorial of %d Is : %d", number, product);

    return 0;
}