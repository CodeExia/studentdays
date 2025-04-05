#include <stdio.h>
#include "convertbintodec.h"

int main()
{
    int binary;

    printf("Please enter a number from 1 to positive infinity.\n");
    while((scanf("%d", &binary)) != 1 || binary <= 0)
    {
        printf("Please enter a number greater than 0, and only use numbers.\n");
        scanf("%d", &binary);
        while (getchar () != '\n');
    }

    printf("%d\n", bintodec(binary));

    return 0;
}