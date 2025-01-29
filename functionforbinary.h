#include <string.h>
#include <stdio.h>

void strrev(char* str)
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* convert (int number)
{
    static char result[80];
    result[0] = 't';
    char one = '1';
    char zero = '0';
    int counter = 0;

    while (number > 0)
    {
        if (number % 2 > 0)
        {
            result[counter++] = one;
            number = number / 2;
        }
        else
        {   
            result[counter++] = zero;
            number = number / 2;
        }
    }
    result[counter] = '\0';

    strrev(result);

    return result;
}