// Write a Program to Convert Temperature from Celsius to Fahrenheit

#include <stdio.h>

int main(){

    float Celsius;
    float Fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.3f\n", Fahrenheit);
    
    return 0;
}