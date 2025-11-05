// Write a Program To Find the Sum Of Array Elements.

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("The Sum Of The Array Elements Is : %d", sum);

    return 0;
}