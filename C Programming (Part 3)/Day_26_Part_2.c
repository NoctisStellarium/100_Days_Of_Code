// Write a Program To Print The Following Pattern.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i <= 3)
        {
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("*\n");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= (2 * (6 - i) - 1); j++)
            {
                printf("*\n");
            }
            printf("\n");
        }
    }

    return 0;
}