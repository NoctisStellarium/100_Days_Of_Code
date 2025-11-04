// Write a Program To Find The Sum Of The Series : 2/3 + 4/7 + 6/11 + 8/15 + Up To n Terms.

#include <stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf("Please Enter The Number Of Terms (Positive Integer) : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i) / (3 + ((i - 1) * 4));
    }

    printf("The Sum Of The Series Up To %d Terms Is : %.2f", n, sum);
    
    return 0;
}