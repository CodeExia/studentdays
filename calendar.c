#include <stdio.h>

int main()
{
    int outputdays;
    int input;
    int days;
    int years;
    int weeks;


    printf("Enter days:\n");
    scanf("%d", &input);

    outputdays = input;
    years = input / 365;
    input %= 365;
    weeks = input / 4;
    input %= 4;
    days = input / 1;

    printf("%d days is: %d year/s, %d week/s, and %d days.\n", outputdays, years, weeks, days);
    
    return 0;

}