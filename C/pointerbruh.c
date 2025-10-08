#include <stdio.h>

int main ()
{
    int x = 100, y;
    double bruh;
    double *p;
    p = (double *)&x; //explicit type conversion
    y = *p;
    bruh = *p;

    printf("%d", bruh);

    return 0;
}