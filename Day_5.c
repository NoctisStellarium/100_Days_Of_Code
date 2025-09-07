// Write a Program to Calculate Simple and Compound Interest for Given Principal Amount, Rate of Interest and Time.
// (pow) Function is Used to Calculate Power of a Number pow(Base, Exponent) 
// #include <math.h> is Required to Use pow() Function

#include <stdio.h>
#include <math.h>   //   This is a also a Preprocessor Directive to Include Math Header File for pow() Function

int main(){

    float principal;
    float rate;
    float time;

    printf("Enter Principal Amount : ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);

    printf("Enter Time (in Years) : ");
    scanf("%f", &time);

    float simple_interest;
    float compound_interest;

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest for Principal Amount %.3f at Rate %.3f for Time %.3f Years is : %.3f\n", principal, rate, time, simple_interest);
    printf("Compound Interest for Principal Amount %.3f at Rate %.3f for Time %.3f Years is : %.3f\n", principal, rate, time, compound_interest);   

    return 0;
}