#include <stdio.h>
#include <string.h>
#include "function.h"

int main()
{
    char binary[80];
    int length;
    int decimal;

    printf("Please enter a binary number:\n");
    scanf("%s", binary);

    //this is to make sure it'a actually a binary number
    length = strlen(binary);
    for (int i = 0; i < length; i++)
    {
        if (binary[i] != '1' && binary[i] != '0')
        {
            printf("Error, please enter a valid binary number.\n");
            return 1;
        }
    }

    decimal = binarytodecl(binary);

    printf("%s into decimal is: %d", binary, decimal);
    return 0;
}
