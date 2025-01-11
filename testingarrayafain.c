#include <stdio.h>

int main()
{
    int x[3][4]={{2,4,6,8},{10,12,1,3},{5,7,9,11}};
    x[2][0] = x[3][2] * x[1][3];
    printf("%d", x[3][2]);
    return 0;
}