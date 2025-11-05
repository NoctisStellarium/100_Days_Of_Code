// Write a Program To Merge Two Arrays.

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int choice;

    printf("Please Enter The Number Of Elements You Want In The Array One : ");
    scanf("%d", &n1);

    printf("Please Enter The Number Of Elements You Want In The Array Two : ");
    scanf("%d", &n2);

    int arr1[n1];
    int arr2[n2];

    printf("Please Enter The Elements Of The Array One : \n");

    for (int i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Please Enter The Elements Of The Array Two : \n");

    for (int i = 0; i < n2; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("Please Enter Your Choice Of Merging (One / Two): ");
    scanf("%d", &choice);

    printf("The Merged Array Is : ");

    if (choice == 1)
    {
        for (int i = 0; i < n1; i++)
        {
            printf("%d ", arr1[i]);
        }

        for (int i = 0; i < n2; i++)
        {
            printf("%d ", arr2[i]);
        }

    }
    else
    {
        for (int i = 0; i < n2; i++)
        {
            printf("%d ", arr2[i]);
        }

        for (int i = 0; i < n1; i++)
        {
            printf("%d ", arr1[i]);
        }

    }

    return 0;
}