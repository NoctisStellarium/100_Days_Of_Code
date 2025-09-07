// Write a Program to Find the Roots of a Quadratic Equation and Categorize Them as Real and Distinct, Real and Equal or Imaginary.

#include <stdio.h>
#include <math.h>

int main() {

    float a;
    float b;
    float c;
    float discriminant;
    float root1, root2;
    float realPart, imagPart;

    printf("Enter Coefficients (a) : ");
    scanf("%f", &a);

    printf("Enter Coefficients (b) : ");
    scanf("%f", &b);

    printf("Enter Coefficients (c) : ");
    scanf("%f", &c);

    discriminant = (b * b) - 4 * a * c;

    if (discriminant > 0) {   // Real and Distinct Roots

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are Real and Distinct.\n");
        printf("Root 1: %.3f\n", root1);
        printf("Root 2: %.3f\n", root2);
    } 
    else if (discriminant == 0) {   // Real and Equal Roots

        root1 = root2 = -b / (2 * a);

        printf("Roots are Real and Equal.\n");
        printf("Root: %.3f\n", root1);
    } 
    else {   // Imaginary Roots

        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are Imaginary.\n");
        printf("Root 1: %.3f + %.3fi\n", realPart, imagPart);
        printf("Root 2: %.3f - %.3fi\n", realPart, imagPart);
    }

    return 0;
}