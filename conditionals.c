#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    printf("What is your number?\n");
    scanf("%d", &n);

    n %= 2;

    if (n == 1)
    {
        printf("Your number is odd!\n");
        printf("Goodevening BSCS 1-4!\n");
    }
    else
    {
        printf("Your number is even!\n");
    }

    printf("Thank you for using my program!\n");

    return 0;
}