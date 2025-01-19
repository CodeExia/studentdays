#include <stdio.h>

int main()
{
    int bruh[5];
    int i = 1;
    
    while (i < 5)
    {
        bruh[i] = ++i;
    }

    for (int f = 0; f < 5; ++f)
    {
        printf("%d", bruh[f]);

    }

    return 0;
}