// Write a Program to Calculate the Area and Perimeter of a Rectangle given its Length and Breadth 
// (%.nf) where n is the number of decimal places to be displayed in (float)

#include <stdio.h>

int main(){

    float length;
    float breadth;

    printf("Enter the Length of the Rectangle: ");
    scanf("%f", &length);

    printf("Enter the Breadth of the Rectangle: ");
    scanf("%f", &breadth);

    float area;
    float perimeter;

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("The Area of the Rectangle is: %.3f\n", area);
    printf("The Perimeter of the Rectangle is: %.3f\n", perimeter);

    return 0;
}