#include <stdio.h>
#include "namengfunction.h"

int main()
{
    char binary[80];
    int length;
    int decimal;

    printf("Please enter a binary number:\n");
    scanf("%s", binary);

    length = sizeof(binary/binary[0]);
    for (int i = 0; i < length; i++)
    {
        if (binary[i] != '1' || binary[i] != '0')
        {
            printf("Error, binary numbers can only contain 1s or 0s.\n);
            return 1;
        }
    }

    decimal = binarytodecl(binary);

    printf("%s into decimal is: %d", binary, decimal);
    return 0;
}