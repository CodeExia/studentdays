#include <stdio.h>
#include "convertbintodec.h"

int bintodec(int binary);
int main()
{
    int binary;
    printf("Please give a binary number.\n");
    scanf("%d", &binary);

    printf("%d converted into decimal is: %d", binary, bintodec(binary));

//btuh

    return 0;

}

