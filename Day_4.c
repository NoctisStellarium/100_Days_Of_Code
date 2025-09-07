// Write a Program to Swap Two Numbers Without Using a Third Variable.

#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the First Variable : ");
    scanf("%d", &a);

    printf("Enter the Second Variable : ");
    scanf("%d", &b);

    printf("Before Swapping, First and Second Variable are : %d and %d\n", a, b);

    a = a + b;
    
    b = a - b;   // Here b = a - b which is (a + b) - b = a (Hence Value of a is assigned to b)
    
    a = a - b;   // Here a = a - b which is (a + b) - a = b (Hence Value of b is assigned to a)
    

    printf("After Swapping, First and Second Variable are : %d and %d\n", a, b);
    return 0;
}