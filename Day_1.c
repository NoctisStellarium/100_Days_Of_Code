// Write a Program to Input Two Numbers and Display Their Sum
// Double Forward Slashes are Used for Single Line Comments

#include <stdio.h>   // This is a Preprocessor Directive to Include Standard Input Output Header File

int main(){   // Main Function is the Starting Point of Any C Program

    // Variable Declaration
    int num1;
    int num2;

    printf("Enter First Number for Addition: ");   // Print Statement to Display Message on Console
    scanf("%d", &num1);   // Scan Statement to Take Input from User and Store it in Variable (num1)

    printf("Enter Second Number for Addition: ");   // Print Statement to Display Message on Console
    scanf("%d", &num2);   // Scan Statement to Take Input from User and Store it in Variable (num2)

    // Variable Declaration and Initialization for Sum
    int sum;

    sum = num1 + num2;   // Addition Operation to Calculate Sum of Two Numbers
    printf("The Sum of %d and %d is: %d\n", num1, num2, sum);   // Print Statement to Display the Result on Console

    return 0;   // Return Statement to Indicate that Program Ended Successfully (Not Required with Void)
}