#include <stdio.h>

int main()
{
    int numbers[] = {1, 5, 10, 20, 50, 100, 200, 500, 1000};
    int input;

    printf("What number would you like to search for?\n");
    scanf("%d", &input);

    for (int i = 0; i < 9; ++i)
    {
        if (numbers[i] == input)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Sorry, not found\n");
    return 1;
}