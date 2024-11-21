#include <stdio.h>

int main ()
{
    int n;
    
    printf("What is your number?\n");
    scanf("%d", &n);

    switch(n)
    {
        case 1: printf("Trinnah\n");
            break;
        case 2: printf("Az\n");
            break;
        case 3: printf("Mel\n");
            break;
        case 4: printf("Eldritch\n");
            break;
        case 5: printf("Eh\n");
            break;
        case 6: printf("What\n");
            break;
        
        default:printf("Thank you!\n");

    }
}