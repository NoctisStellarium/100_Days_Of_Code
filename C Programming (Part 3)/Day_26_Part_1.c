// Write a Program To Print The Following Pattern.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        
        for (int j = n - i; j <= n; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}