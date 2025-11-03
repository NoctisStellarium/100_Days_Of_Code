// Write a Program To Print The Sum Of The First n Odd Numbers.

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Please Enter a Positive Integer : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    printf("The Sum of First %d Odd Numbers Is : %d", n, sum);


    return 0;
}