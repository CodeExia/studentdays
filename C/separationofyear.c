#include <stdio.h>


int main()
{
    int year;
    int century, year1;

    printf("Please enter a year: ");
    scanf("%d", &year);

    century = (year / 100) + 1;
    year1 = (year % 100);

    if (century > 3)
    printf("It is the %dth century, and the year of %d", century, year1);
    else if (century == 3)
    printf("It is the %drd century, and the year of %d", century, year1);
    else if (century == 2)
    printf("It is the %dnd century, and the year of %d", century, year1);
    else if (century == 0)
    printf("It is the 1st century, and the year of %d", century, year1);
    else
    {
    printf("Error, year does not exist.\n");
    return 1;
    }
    return 0;

}