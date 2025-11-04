// Write a Program To Find The Highest Common Factor Of Two Numbers.

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int hcf = 1;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    
    printf("The Highest Common Factor Of %d And %d Is : %d", num1, num2, hcf);

    return 0;
}