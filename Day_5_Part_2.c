// Write a Program to Input Time in Seconds and Convert it into Hours : Minutes : Seconds Format
// (%0nd means to print the number with a minimum width of n digits, padding with leading zeros if necessary)

#include <stdio.h>

int main(){

    int input_seconds;
    printf("Enter Time in Seconds : ");
    scanf("%d", &input_seconds);

    int hours;
    int minutes;
    int seconds;

    hours = input_seconds / 3600;
    minutes = (input_seconds % 3600) / 60;
    seconds = (input_seconds % 3600) % 60;

    printf("Time in Hours:Minutes:Seconds Format is : %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}