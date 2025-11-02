// Write a Program to Find and Display The Sum Of The First n Natural Numbers.

#include <stdio.h>

int main()
{
    int n;
    int sum;
    
    printf("Please Enter a Number To Find Sum of The First n Natural Numbers : ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;
    printf("The Sum of The First %d Natural Numbers Is : %d", n, sum);

    return 0;
}