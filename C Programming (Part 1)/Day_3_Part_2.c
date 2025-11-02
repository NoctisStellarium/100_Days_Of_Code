// Write a Program to Swap Two Numbers Using a Third Variable.

#include <stdio.h> 

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    printf("Before Swap\n");
    printf("The First Number Is %d & The Second Number Is %d\n", num1, num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("After Swap\n");
    printf("The First Number Is %d & The Second Number Is %d", num1, num2);

    return 0;
}