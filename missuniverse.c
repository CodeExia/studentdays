#include <stdio.h>

int main()

{
    char name [80];
    int height, weight, age, education;

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("What is your height? (In \")\n");
    scanf("%d", &height);

    if (height >= 5)
    {
        printf("What is your weight?\n");
        scanf("%d", &weight);
        if (weight == 50)
        {
            printf("How old are you?\n");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("Are you atleast a High School graduate? (Y = 1, N = 0)\n");
                scanf("%d", &education);
                if (education == 1)
                {
                    printf("Congrats! %s you are accepted into the Miss Universe Competition!", name);
                    return 0;
                }
                else {
                printf("Unfortunately %s you are not accepted as you are not within the accepted education level", name);
                }
            }
            else {
            printf("Unfortunately, %s you are not accepted as you are not old enough", name);
            }
            return 0;
        }
        else {
            printf("Unfortunately, %s youare not withing the weight range", name);
        }
        return 0;
    }
    else 
    {
    printf("Unfortunately, %s you are not accepted as you are not tall enough\n", name);
    return 0;
    }

}