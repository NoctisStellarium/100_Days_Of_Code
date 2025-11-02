// Write a Program to Calculate The Area and Circumference Of a Circle Given Its Radius.

#include <stdio.h>
#define PI 3.14159265359

int main()
{
    float radius;
    float area;
    float circumference;

    printf("Please Enter The Radius Of The Circle : ");
    scanf("%f", &radius);

    area = PI * (radius * radius);
    printf("The Area Of The Circle With Radius %.2f Is : %.2f\n", radius, area);

    circumference = 2 * PI * radius;
    printf("The Circumference Of The Circle With Radius %.2f Is : %.2f\n", radius, circumference);

    return 0;
}