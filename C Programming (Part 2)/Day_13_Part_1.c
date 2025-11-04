// Write a Program To Implement a Basic Calculator Using Switch Case.

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char operator;
    int result;

    printf("Please Enter The First Number : ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number : ");
    scanf("%d", &num2);

    printf("Please Enter The Operator (Addition, Subtraction, Multiplication, Division, Remainder) : ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
        {
            result = num1 + num2;
            printf("The Addition of %d and %d is : %d", num1, num2, result);
            break;
        }
        case '-':
        {
            result = num1 - num2;
            printf("The Subtraction of %d and %d is : %d", num1, num2, result);
            break;
        }
        case '*':
        {
            result = num1 * num2;
            printf("The Multiplication of %d and %d is : %d", num1, num2, result);
            break;
        }
        case '/':
        {
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("The Division of %d and %d is : %d", num1, num2, result);
            }
            else
            {
                printf("Division by Zero Is Not Defined");
            }
            break;
        }
        case '%':
        {
            if(num2 != 0)
            {
                result = num1 % num2;
                printf("The Remainder of %d and %d is : %d\n", num1, num2, result);
            }
            else
            {
                printf("Division by Zero Is Not Defined");
            }
            break;
        }
        default:
        {
            printf("Invalid Operator Used Please use +, -, *, /, or %%");
            break;
        }
    }

    return 0;
}