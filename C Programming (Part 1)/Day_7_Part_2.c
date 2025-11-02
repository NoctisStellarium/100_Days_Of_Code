// Write a Program to Input a Character and Check Whether It Is a Vowel or Consonant Using If Else Conditions.

#include <stdio.h>

int main()
{
    char input;

    printf("Please Enter a Character : ");
    scanf("%c", &input);

    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
    {
        if (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' ||
            input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
        {
            printf("The Given Character %c Is a Vowel", input);
        }
        else
        {
            printf("The Given Character %c Is a Consonant", input);
        }
    }
    else
    {
        printf("The Given Character %c Is Not an Alphabet", input);
    }

    return 0;
}