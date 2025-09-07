// Write a Program to Find and Display the Sum of the First n Natural Numbers.

#include <stdio.h>

int main(){

    int n;
    int sum;
    sum = 0;

    printf("Enter a Number to Find the Sum of n Natural Numbers : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid Input, Please Enter a Natural Number \n");
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        printf("The Sum of First %d Natural Numbers is : %d \n", n, sum);
    }
    return 0;
}
