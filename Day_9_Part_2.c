// Write a Program That Accepts a Percentage (0 - 100) and Assign a Grade Based on the Following Criteria.

#include <stdio.h>

int main() {

    int percentage;
    char grade;

    printf("Enter the Percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input. Please enter a percentage between 0 and 100.\n");
    }
    else if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } 
    else if (percentage >= 80  && percentage <= 89) {
        grade = 'B';
    } 
    else if (percentage >= 70  && percentage <= 79) {
        grade = 'C';
    } 
    else if (percentage >= 60  && percentage <= 69) {
        grade = 'D';
    } 
    else {
        grade = 'F';
    }

    printf("The Grade is : %c\n", grade);

    return 0;
}