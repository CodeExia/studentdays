#include <stdio.h>
#include "functionforbinary.h"

int binaryDecimal(int number);
int main()
{
    int binary;
    printf("Please give a number.\n");
    scanf("%d", &binary);

    printf("%d converted into binary is: %s", binary, convert(binary));


    return 0;

}

