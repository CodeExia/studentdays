#include <stdio.h>

int main()
{
    int a, b;

    printf("What is your first number?\n");
    scanf("%d", &a);
    printf("What is your second number?\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is lesser than %d\n", a, b);
    }
    else
    {
        printf("%d is equal to %d\n", a, b);
    }

    if (a%2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }

    if (b%2 == 0)
    {
        printf("%d is even\n", b);
    }
    else
    {
        printf("%d is odd\n", b);
    }

    return 0;
}