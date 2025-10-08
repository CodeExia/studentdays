#include <stdio.h>

int main()
{
    int hours;
    int minutes;
//Establishes the two variables needed, the input age and the resulting minutes (after the conversion)

    printf("Please enter the hours you wish to convert into minutes:\n");
    scanf("%d", &hours);
//Asks for the input for the hours to be converted
    minutes = hours * 60;
//Calculates the corresponding conversion. Every hour is equal to 60 minuts thus (hours * 60)
    printf("%d hours is equal to %d minutes\n", hours,minutes);

    return 0;

}
