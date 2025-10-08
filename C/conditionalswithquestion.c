#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    n%2 == 1 ? n++ : n--;

    printf("%d\n", n);
    printf("Thank you!\n");

    return 0;
}