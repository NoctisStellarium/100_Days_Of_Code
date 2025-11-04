// Write a Program To Print The Following Pattern.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number of Rows To See The Pattern : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*****");
        printf("\n");
    }

