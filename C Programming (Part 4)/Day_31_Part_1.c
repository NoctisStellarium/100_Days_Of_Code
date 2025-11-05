// Write a Program To Search For an Element In an Array Using Linear Search.

#include <stdio.h>

int main()
{
    int n;
    int number;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please Enter The Number You Want To Search : ");
    scanf("%d", &number);


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            printf("The Number Was Found At Index %d", i);
            break;
        }
    }

    return 0;
}