// Write a Program To Count Even and Odd Numbers In an Array.

#include <stdio.h>

int main()
{
    int n;
    int even = 0;
    int odd = 0;

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
        if (arr[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }

    printf("The Number Of Even Numbers In The Array Are : %d\n", even);
    printf("The Number Of Odd Numbers In The Array Are : %d", odd);

    return 0;
}