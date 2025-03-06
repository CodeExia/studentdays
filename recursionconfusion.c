#include <stdio.h>

void fun(int x, int y)
{
    if (x>40)
        return;
    x+=y;
    fun(x,y);
    printf("x:%d\n", x);
}

int main()
{
    int x = 10;
    fun (x, x++);
    printf("x:%d\n", x);

    return 0;
}