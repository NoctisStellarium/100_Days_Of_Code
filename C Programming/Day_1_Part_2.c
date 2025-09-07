// Write a Program to Input Two Numbers and Display their Sum, Difference, Product, and Quotient
// As Calculation of Quotient is Involved, Division by Zero need to be Handled Carefully

/*
This is Used for Multiple Line Comments

Using (int) Returns the Greatest Integer Value Less than or Equal to the Given Value
Using (float) Returns the Decimal Value 

*/

#include <stdio.h>

int main(){
    float num1;
    float num2;

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    float sum;
    float difference;
    float product;
    float quotient;   // Float is Used to Store Decimal Values (Result for Division)

    sum = num1 + num2;
    difference = num1 - num2;   // Subtraction Operator
    product = num1 * num2;   // Multiplication Operator

    printf("The Sum of %f and %f is : %.3f\n", num1, num2, sum);
    printf("The Difference of %f and %f is : %.3f\n", num1, num2, difference);
    printf("The Product of %f and %f is : %.3f\n", num1, num2, product);

    // For Division We Need to Use Conditional Statements to Check if Denominator is Zero

    if (num2 == 0){
        printf("Division By Zero is Not Defined ");
    } 
    else {
        quotient = num1 / num2;   // Division Operator
        printf("The Quotient of %f and %f is : %.3f", num1, num2, quotient);
    }

    return 0;
}