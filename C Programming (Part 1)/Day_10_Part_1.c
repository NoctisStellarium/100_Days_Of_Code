// Write a Program To Classify a Triangle as Equilateral, Isosceles Or Scalene Based On Its Side Lengths.

#include <stdio.h>

int main()
{
    float side1;
    float side2;
    float side3;
    float largestSide;

    printf("Please Enter The Length of The First Side : ");
    scanf("%f", &side1);

    printf("Please Enter The Length of The Second Side : ");
    scanf("%f", &side2);

    printf("Please Enter The Length of The Third Side : ");
    scanf("%f", &side3);

    if (side1 >= side2 && side1 >= side3)
    {
        largestSide = side1;
    }
    else if (side2 >= side1 && side2 >= side3)
    {
        largestSide = side2;
    }
    else
    {
        largestSide = side3;
    }

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("The Triangle is Equilateral");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("The Triangle is Isosceles");
        }
        else
        {
            printf("The Triangle is Scalene");
        }
    }
    else
    {
        printf("The Given Sides Do Not Form a Triangle");
    }

    return 0;
}