#include <stdio.h>
//Bruh, anyway im practicing

int checker(int number);

int main()
{
    int input;

    printf("Enter a number:\n");
    scanf("%d", &input);

    if (checker(input))
        printf("Even!\n");
    else 
        printf("Odd!\n");

    return 0;
}

int checker(int number)
{
    if (number % 2 == 0)
        return 1;
    else 
        return 0;
}