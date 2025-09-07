// Write a Program to Input Three Numbers and Find the Largest Number Among Them Using If-Else Statement.

#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("Enter the First Number : ");
    scanf("%d", &num1);

    printf("Enter the Second Number : ");
    scanf("%d", &num2);

    printf("Enter the Third Number : ");
    scanf("%d", &num3);

    if(num1 >= num2 && num1 >= num3){
        printf("The Largest Number is : %d", num1);
    }
    else if(num2 >= num1 && num2 >= num3){
        printf("The Largest Number is : %d", num2);
    }
    else{
        printf("The Largest Number is : %d", num3);
    }

    return 0;
}