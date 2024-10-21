#include <stdio.h>

int main()
{
    int iseconds = 00;
    int seconds = 00;
    int minutes = 00;
    int hours = 00;

    printf("Enter seconds: \n");
    scanf("%d",&iseconds);

    hours = iseconds / 3600;
    iseconds %= 3600;
    minutes = iseconds / 60;
    iseconds %= 60;
    seconds = iseconds / 1;

    printf("Seconds: %d\n", seconds);
    printf("Minutes: %d\n", minutes);
    printf("Hours: %d\n", hours);

    printf("The time is %.2d:%.2d:%.2d", hours, minutes, seconds);
    return 0;
}