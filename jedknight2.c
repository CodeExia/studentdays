#include <stdio.h>

int main()

{
    char name [80];
    int height, age, citizenship, recommendation;

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("What is your recommendee's code? (Asnwer in numbers: Y = 1, N = 0)\n");
    scanf("%d", &recommendation);
    if (recommendation == 1)
    {
        printf("Congrats! %s you are accepted into the Jedi Knight Academy!", name);
        return 0;
    }

    printf("What is your height?\n");
    scanf("%d", &height);

    if (height >= 200)
    {
        printf("What is your age?\n");
        scanf("%d", &age);
        if (age >= 21 && age <= 25)
        {
            printf("Are you a citizen of the Planet Endor? (Asnwer in numbers: Y = 1, N = 0)\n");
            scanf("%d", &citizenship);
            if (citizenship == 1)
            {
                printf("Congrats! %s you are accepted into the Jedi Knight Academy!", name);
            }
            else {
            printf("Unfortunately, %s you are not accepted as you are not a citizen of the Planet Endor\n", name);
            }
            return 0;
        }
        else {
            printf("Unfortunately, %s you are not accepted as you are not old enough\n", name);
        }
        return 0;
    }
    else 
    {
    printf("Unfortunately, %s you are not accepted\n", name);
    return 0;
    }

}