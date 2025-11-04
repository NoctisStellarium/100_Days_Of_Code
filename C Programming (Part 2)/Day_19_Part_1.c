// Write a Program To Find The LCM  Of Two Numbers.

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num1 : num2;
    int lcm;

    for (int i = max; ; i = i + max)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("The LCM of %d and %d Is : %d", num1, num2, lcm);

    return 0;
}