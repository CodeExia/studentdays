#include <stdio.h>

int main()

{

    int height;
    int age;
    int citizen;
    int recommended;

    printf("What is your height?\n");
    scanf("%d", &height);

    if (height >= 200);
    {
        printf("What is your age?\n");
        scanf("%d", &age);
        if (age >= 21 && age <= 25)
        {
            printf("Are you a citizen of the Planet Endor? (Y = 1, N = 0)\n");
            scanf("%d", &citizen);
            if (citizen = 1)
            {
                printf("Congrats! You are accepted into the Jedi Knight Academy!");
                return 0;
            }
            else 
            {
            printf("Citizenship invalid\n");
            return 0;
            }


        }
        else 
        {
            printf("Age range not accepted\n");
            return 0;
        }
    else
    {
    printf("Height range not accepted\n");
    return 0;
    }
    }
    
    printf("Are you recommended by Jedi Master Obi Wan?\n");
    scanf("%s", &recommended);
    if (recommended == 'y' || recommended == 'Y')\
    {
        printf("Congrats! You are accepted into the Jedi Knight Academy!");
    }





}