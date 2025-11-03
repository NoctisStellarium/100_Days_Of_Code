// Write a Program to Calculate Simple and Compound Interest For Given Principal, Rate and Time.

#include <stdio.h>
#include <math.h>

int main()
{
    int principal;
    float rate;
    int time;
    float simple_interest;
    float compound_interest;

    printf("Please Enter The Principal Amount : ");
    scanf("%d", &principal);

    printf("Please Enter The Rate Of Interest : ");
    scanf("%f", &rate);

    printf("Please Enter The Time Duration : ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100;
    printf("The Simple Interest For Principal Amount %d, Rate Of Interest %.2f & Time Duration %d Years Is : %.2f\n", principal, rate, time, simple_interest);
    
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("The Compound Interest For Principal Amount %d, Rate Of Interest %.2f & Time Duration %d Years Is : %.2f", principal, rate, time, compound_interest);

    return 0;
}