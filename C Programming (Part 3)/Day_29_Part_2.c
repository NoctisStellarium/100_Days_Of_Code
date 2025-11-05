// Write a Program To Find the Maximum and Minimum Element In an Array.

#include <stdio.h>

int main()
{
    int n;
    int max;
    int min;

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
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            else if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }

    printf("The Maximum Element In The Array Is : %d\n", max);
    printf("The Minimum Element In The Array Is : %d", min);

    return 0;
}