// Write a Program to Swap Two Numbers Using a Third Variable

#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the First Variable : ");
    scanf("%d", &a);

    printf("Enter the Second Variable : ");
    scanf("%d", &b);

    printf("Before Swapping, First and Second Variable are : %d and %d\n", a, b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After Swapping, First and Second Variable are : %d and %d\n", a, b);
    return 0;
}