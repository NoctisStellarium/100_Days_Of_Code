// Write a Program To Read and Print Elements Of a One Dimensional Array.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The Elements You Entered In The Array Are : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : %d\n", i + 1, arr[i]);
    }

    return 0;
}