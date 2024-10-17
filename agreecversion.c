#include <stdio.h>

int main()
{
    char answer;

    printf("Do yuo agree?\n");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("You have agreed!\n");
    }
    
    else if (answer == 'n' || answer == 'N')
    {
        printf("You have not agreed!\n");
    }
    
    return 0;
}   