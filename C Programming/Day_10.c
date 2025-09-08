// Write a Program to Classify a Triangle as Equilateral, Isosceles or Scalene Based on its Side Lengths.

#include <stdio.h>

int main() {

    float side1;
    float side2;
    float side3;


    printf("Enter the Length of the First Side of the Trinagle : ");
    scanf("%f", &side1);

    printf("Enter the Length of the Second Side of the Trinagle : ");
    scanf("%f", &side2);

    printf("Enter the Length of the Third Side of the Trinagle : ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The Triangle is Equilateral.\n");
    } 
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The Triangle is Isosceles.\n");
    } 
    else {
        printf("The Triangle is Scalene.\n");
    }

    return 0;
}

