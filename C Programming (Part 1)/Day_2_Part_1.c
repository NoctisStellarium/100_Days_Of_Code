// Write a Program to Calculate Perimeter and Area Of a Rectangle Given Its Length and Breadth.

#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Please Enter The Length Of The Rectangle : ");
    scanf("%f", &length);

    printf("Please Enter The Breadth Of The Rectangle : ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    printf("The Perimeter Of Rectangle With Length %.2f & Breadth %.2f Is : %.2f\n", length, breadth, perimeter);

    area = length * breadth;
    printf("The Area of Rectangle With Length %.2f & Breadth %.2f Is : %.2f", length, breadth, area);

    return 0;
}