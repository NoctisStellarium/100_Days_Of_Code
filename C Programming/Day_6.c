// Write a Program to Input an Integer and Check Whether it is Even or Odd Using If-Else Statement.

#include <stdio.h>

int main(){

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}