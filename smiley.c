#include <stdio.h>

int main()
{
    char name [80];
    int one;
    int two;
    int three;
    int sum;
    
    printf("What is your name?\n");
    scanf("%s", name);
    printf("What is your first number?\n");
    scanf("%d", &one);
    printf("What is your second number?\n");
    scanf("%d", &two);
    printf("What is your third number?\n");
    scanf("%d", &three);

    sum = one + two + three;
    sum = sum * 2;

    printf("%s, twice the sum of your numbers %d, %d, and %d is %d :) :) :)",name, one, two, three, sum);
    return 0;
    
}