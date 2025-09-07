// Write a Program to Input a Character and Check Whether it is a Vowel or Consonant using If-Else Statement.
// (char) is the data type to store a character value, using %c format specifier in scanf and printf functions.

#include <stdio.h>

int main(){

    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel.\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a Consonant.\n", ch);
    }
    else {
        printf("%c is not an Alphabetic Character.\n", ch);
    }

    return 0;
}