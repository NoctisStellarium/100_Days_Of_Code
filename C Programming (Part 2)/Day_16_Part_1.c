// Write a Program To Take a Number as Input and Print Its Equivalent Binary Representation.

#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    int binary[64];

    printf("Please Enter a Number To Know Its Binary Representation : ");
    scanf("%d", &num);

    printf("The Binary Representation of %d is : ", num);

    if (num == 0)
    {
        printf("0");
    }
    else
    {
        while (num > 0)
        {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
    }

    return 0;
}