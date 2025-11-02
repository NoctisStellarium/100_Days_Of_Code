// Write a Program To Input Time In Seconds and Convert It To Hours : Minutes : Seconds Format.

#include <stdio.h>

int main()
{
    int seconds;
    int minutes;
    int hours;

    printf("Please Enter The Time In Seconds : ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("The Time In Hours : Minutes : Seconds Format Is : %02d : %02d : %02d", hours, minutes, seconds);

    return 0;
}