#include <stdio.h>
#include <string.h>


double power(int number, int size)
{
    double result = 1;

    for (int i = 0; i < size; i++)
    {
        result *= number;
    }
    return result;
}

int binarytodecl(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += power(2, i);
        }
    }
    
    return decimal;
}
