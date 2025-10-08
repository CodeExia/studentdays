#include <stdio.h>

int main()
{
    int selection;
    int outputdays;
    int input;
    int days;
    int years;
    int weeks;

    printf("Select from the following:\n");
    printf("Hours:Minutes:Seconds (1)\n");
    printf("Years:Weeks:Days (2)\n");
    scanf("%d", &selection);


    printf("Enter days:\n");
    scanf("%d", &input);

    if (selection == 1)
    {
        outputdays = input;
        years = input / 365;
        input %= 365;
        weeks = input / 4;
        input %= 4;
        days = input / 1;
        printf("%d days is: %d year/s, %d week/s, and %d day/s.\n", outputdays, years, weeks, days);
    }
    else if (selection == 2)
    {
        outputdays = input;
        years = input * 24;
        //This is for hours
        weeks = input * 1440;
        //This is for minutes
        days = input * 86400;
        printf("%d days is: %d hour/s, or %d minute/s, or %d second/s.\n", outputdays, years, weeks, days);
    }
    else
    {
        printf("Error in selecting, please try again.\n");
        return 1;
    }
    
    return 0;

}