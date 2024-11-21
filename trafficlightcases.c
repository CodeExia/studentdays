#include <stdio.h>

int main ()
{
    char n;
    
    printf("What is your color?\n");
    scanf("%c", &n);

    switch(n)
    {
        case 'R':;
        case 'r': printf("STOP\n") && printf("HEALTHBREAK first\n");
            break;
        case 'Y':;
        case 'y': printf("Wait\n");
            break;
        case 'G':;
        case 'g': printf("Go\n");
            break;        
        default:printf("Error\n");

    }
    return 0;
}