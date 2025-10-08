#include <stdio.h>

int main()
{
    int n;

    printf("Please enter your number:\n);
    scanf("%d", &n);

    n%2 == 1? printf("Your number is odd.\n");: printf("Your number is even.\n");

    return 0;
} 