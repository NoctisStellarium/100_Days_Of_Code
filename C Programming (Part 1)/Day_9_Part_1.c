// Write a Program to Find The Roots Of a Quadratic Equation and Categorize Them.

#include <stdio.h>
#include <math.h>

int main()
{   
    int a;
    int b;
    int c;
    int discriminant;
    int root1;
    int root2;
    int realPart;
    int imaginaryPart;

    printf("Enter The First Coefficient (a) : ");
    scanf("%d", &a);

    printf("Enter The Second Coefficient (b) : ");
    scanf("%d", &b);

    printf("Enter The Third Coefficient (c) : ");
    scanf("%d", &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        printf("The Roots are Real and Distinct\n");

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The First Root For The Quadratic Equation Is : %d\n", root1);
        printf("The Second Root For The Quadratic Equation Is : %d", root2);
    }
    else if (discriminant == 0)
    {
        printf("The Roots are Real and Equal\n");

        root1 = -b + sqrt(discriminant) / (2 * a);
        root2 = root1;

        printf("The First Root For The Quadratic Equation Is : %d\n", root1);
        printf("The Second Root For The Quadratic Equation Is : %d", root2);
    }
    else
    {
        printf("The Roots are Imaginary\n");

        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("The First Root For The Quadratic Equation Is : %d + %di\n", realPart, imaginaryPart);
        printf("The Second Root For The Quadratic Equation Is : %d - %di", realPart, imaginaryPart);
    }

    return 0;
}