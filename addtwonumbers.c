#include <stdio.h>

int main()
{
    int a, b;

    printf("Give your first number:\n");
    scanf("%d", &a);
    printf("Give your second number:\n");
    scanf("%d", &b);
    a = a + b;
    printf("Give your third number:\n");
    scanf("%d", &b);
    a = a + b;
    printf("Give your fourth number:\n");
    scanf("%d", &b);
    a = a + b;
    printf("Give your fifth number:\n");
    scanf("%d", &b);
    a = a + b;

    a = a * 2;
    printf("Here is twice the sum of your five numbers: %d", a);
    return 0;
}