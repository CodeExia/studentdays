#include <stdio.h>

int sumNumbers(int x);

int main()
{
    printf("%d", sumNumbers(5));

    return 0;
}

int sumNumbers(int x)
{
    if (x == 0)
        return 0;
    return x + (sumNumbers(x-1));
}