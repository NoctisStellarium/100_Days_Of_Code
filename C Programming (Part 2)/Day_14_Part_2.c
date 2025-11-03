// Write a Program To Print The Product Of Even Numbers From 1 To n.

#include <stdio.h>

int main()
{
    int n;
    int product = 1;

    printf("Please Enter a Positive Integer (>= 2) : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("The Product of Even Numbers from 1 To %d Is : %d", n, product);

    return 0;
}