#include <stdio.h>

int main()
{
    int grade;
    char credit;

    printf("What is your numerical grade?\n");
    scanf("%d", &grade);
    printf("Have you completed extra credits? (Y or N)\n");
    scanf("%s", &credit);

    if (grade < 80 || grade > 100)
    {
        printf("Error with the grades, please check again.\n");
        return 2;
    }
    else
    {
        if (credit == 'Y' || credit == 'y')
        {
            if (grade >= 90)
            {
                printf("A+!");
                return 0;
            }
            else if (grade >= 80 && grade <= 89)
            {
                printf("B+!");
                return 0;
            }
        }
        else if (credit == 'N' || credit == 'n')
        {
            if (grade >= 90)
            {
                printf("A!");
                return 0;
            }
            else if (grade >= 80 && grade <= 89)
            {
                printf("B!");
                return 0;
            }
        }
    }
}