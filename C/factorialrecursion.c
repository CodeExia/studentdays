#include <stdio.h>

int factorialRecursion(int x)
{
    if (x == 0)
        return 1;
    return x * factorialRecursion(x-1);
}

int main()
{
    printf("%d", factorialRecursion(10));
    return 0;
}