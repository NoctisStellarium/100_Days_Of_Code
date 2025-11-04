// Write a Program To Find The Sum Of The Series : 1 + 3/4 + 5/6 + 7/8 + Up To n Terms.

#include <stdio.h>

int main()
{
    int n;
    float term;
    float sum = 1;

    printf("Please Enter The Number Of Terms (Positive Integer) : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        term = (2 * i - 1) / (float)(2 * i);
        sum = sum + term;
    }

    printf("The Sum Of The Series Up To %d Terms Is : %.2f", n, sum);

    return 0;
}