#include <stdio.h>

int main()
{
    int hours;
    int minutes;
    char name [80];
//Establishes the two variables needed, the input age and the resulting minutes (after the conversion)

    printf("Please enter your name:\n");
    scanf("%s", name);
    printf("Please enter the hours you wish to convert into minutes:\n");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("%s, %d hours is ",name,hours);
    printf("equal to %d minutes", minutes);

    return 0;

}