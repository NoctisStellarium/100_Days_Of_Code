// Write a Program To Find The One's Complement Of a Binary Number and Print It.

#include <stdio.h>
#include <string.h>

int main()
{
    char binary[64];

    printf("Please Enter a Binary Number To Find Its One's Complement : ");
    scanf("%s", &binary);

    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else
        {
            binary[i] = '0';
        }
    }

    printf("The One's Complement of the Given Binary Number Is : %s", binary);

    return 0;
}