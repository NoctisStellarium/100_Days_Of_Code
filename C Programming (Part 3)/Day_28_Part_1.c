// Write a Program To Print All The Prime Numbers From 1 To n.

#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Please Enter a Positive Integer To Know All The Prime Numbers Between 1 And n : ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) 
    {
        int isPrime = 1;  

        for (int j = 2; j <= sqrt(i); j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;  
                break;
            }
        }

        if (isPrime) 
        {
            printf("%d is a Prime Number\n", i);
        }
    }

    return 0;
}