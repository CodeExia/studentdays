#include <stdio.h>

int main()
{
    int year;

    printf("Please enter a year:\n");
    scanf("%d", &year);


    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            printf("It's a leap year!\n");
            else
            printf("It's not a leap year.\n");
        }
        else 
        printf("It's a leap year!\n");
    }
    else
    printf("It's not a leap year.\n");

    return 0;

}