#include <stdio.h>
#include <math.h>

//math.h isn't working
double power(int number, int size)
{
    double result = 1;

    for (int i = 0; i < size; i++)
    {
        result *= number;
    }
    return result;
}

int bintodec (int binary)
{
    int counter = 0;
    int result = 0;
    int digit;

    //the loop will keep running until every digit has been accounted for
    while (binary > 0)
    {
        digit = binary % 10;

        //digit will only be either 1 and 0, so we can just multiply the increasing positions of power.
        result += digit * power(2, counter);

        //Para matanggal ung digit na cinalculate na natin
        binary /= 10;

        //counter for the power of two, credits to ma'am nina
        counter++;
    }

    return result;
}