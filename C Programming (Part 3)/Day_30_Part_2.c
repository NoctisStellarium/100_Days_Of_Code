// Write a Program To Count Positive, Negative and Zero Elements In an Array.

#include <stdio.h>

int main()
{
    int n;
    int positive = 0;
    int negative = 0;
    int zero = 0;

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
        if (arr[i] == 0)
        {
            zero = zero + 1;
        }
        else if (arr[i] > 0)
        {
            positive = positive + 1;
        }
        else
        {
            negative = negative + 1;
        }
    }

    printf("The Number Of Positive Numbers In The Array Are : %d\n", positive);
    printf("The Number Of Negative Numbers In The Array Are : %d\n", negative);
    printf("The Number Of Zero Numbers In The Array Are : %d", zero);

    return 0;
}