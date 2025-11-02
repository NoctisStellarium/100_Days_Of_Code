// Write a Program To Input a Character and Check Whether It Is an Uppercase Alphabet, Lowercase Alphabet, Digit, or Special Character.

#include <stdio.h>

int main()
{
    char input;

    printf("Please Enter a Character : ");
    scanf("%c", &input);

    if (input >= 'A' && input <= 'Z')
    {
        printf("The Given Character %c Is an Uppercase Alphabet", input);
    }
    else if (input >= 'a' && input <= 'z')
    {
        printf("The Given Character %c Is a Lowercase Alphabet", input);
    }
    else if (input >= '0' && input <= '9')
    {
        printf("The Given Character %c Is a Digit", input);
    }
    else
    {
        printf("The Given Character %c Is a Special Character", input);
    }

    return 0;
}