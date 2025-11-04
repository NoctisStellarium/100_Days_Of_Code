// Write a Program To Print All Factors Of a Given Number.

#include <stdio.h>

int main()
{
    int num;

    printf("Please Enter a Numebr To Know Its Factors : ");
    scanf("%d", &num);

    printf("Factors Of %d Are : ", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}