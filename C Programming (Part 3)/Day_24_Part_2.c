// Write a Program To Print The Following Pattern.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}