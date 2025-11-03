// Write a Program To Print Numbers From 1 To n.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter a Positive Integer : ");
    scanf("%d", &n);

    printf("Numbers From 1 To %d Are : ", n);

    for (int i = 1; i <=n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}