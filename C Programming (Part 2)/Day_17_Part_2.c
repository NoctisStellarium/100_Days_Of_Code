// Write a Program To Check If a Number Is Prime.

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int root;

    printf("Please Enter a Number To Check If It Is Prime : ");
    scanf("%d", &num);

    root = sqrt(num);

    if (num <= 1)
    {
        printf("%d Is Not a Prime Number", num);
    }
    else if (num > 1 && num <= 3)
    {
        printf("%d Is a Prime Number", num);
    }
    else
    {
        for (int i = 2; i <= root; i++)
        {
            if (num % i == 0)
            {
                printf("%d Is Not a Prime Number", num);
                break;
            }
            else
            {
                printf("%d Is a Prime Number", num);
                break;
            }
        }
    }

    return 0;
}