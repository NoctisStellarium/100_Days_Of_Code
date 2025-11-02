// Write a Program to Convert Temperature From Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("Please Enter The Temperature In Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature In Fahrenheit Is : %.2f", fahrenheit);

    return 0;
}