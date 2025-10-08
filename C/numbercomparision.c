#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("Please enter your third number:\n");
    scanf("%d", &c);

    if (a > b)
        {
            if (a > c)
            printf("%d is the largest number of the three.\n", a);
            else
            printf("%d is the largest number of the three.\n", c);
        }
    else if (b > a)
        {
            if (b > c)
            printf("%d is the largest number of the three.\n", b);
            else
            printf("%d is the largest number of the three.\n", c);
        }
    
    return 0;

}