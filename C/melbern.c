#include <stdio.h>

int main()
{
    char name [80];
    int a, b;

    printf("Please enter your name: \n");
    scanf("%s", &name);
    printf("Please enter your age: \n");
    scanf("%d", &a);
    b = a / 2;
    b = b + 7;
    printf("Your partner's ideal age: %d", b);

    return 0;
}