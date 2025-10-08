#include <stdio.h>

int main()
{
    int trial;
    int choice;
    int choice1;
    int confirmation;
    int confirmation1;

        do
        {
        printf("Please choose between the three: \n1. Smiley \n2. Plato \n3. Seconds \n4. Exit\n");
        scanf("%d", &choice1);
        if (choice1 > 4 || choice1 < 1)
        {
        printf("Error, option does not exist.\n");
        return 1;
        }
        else if (choice1 == 1)
        do{
        {
        char name [80];
        int one;
        int two;
        int three;
        int sum;
        
        printf("What is your name?\n");
        scanf("%s", name);
        printf("What is your first number?\n");
        scanf("%d", &one);
        printf("What is your second number?\n");
        scanf("%d", &two);
        printf("What is your third number?\n");
        scanf("%d", &three);

        sum = one + two + three;
        sum = sum * 2;

        printf("%s, twice the sum of your numbers %d, %d, and %d is %d :) :) :)",name, one, two, three, sum);
        }
        printf("\nDo you want to try again? Yes = 1, No = 0\n");
        scanf ("%d", &trial);
        } while (trial == 1);
        else if (choice1 == 2)
        {
            do
            {
            int age;
            int ipa;
            char gender;

            printf("Please enter your gender in character (f/m):\n");
            scanf("%s", &gender);

            if (gender == 'm' || gender == 'M')
            {
                printf("Please enter your age:\n");
                scanf("%d", &age);

                ipa = age / 2;
                ipa = ipa + 7;

                printf("Your ideal partner's age is: %d", ipa);
            }
            else if (gender == 'f' || gender == 'F')
            {
                printf("Please enter your age:\n");
                scanf("%d", &age);

                ipa = age - 7;
                ipa = ipa * 2;

                printf("Your ideal partner's age is: %d", ipa);
            }
            else
            {
                printf("Error, input specified not within rage.\n");
            }
            printf("\nDo you want to try again? Yes = 1, No = 0\n");
            scanf ("%d", &trial);
            } while (trial == 1);

        }
        else if (choice1== 3)
        {
        do
        {
        int iseconds = 00;
        int seconds = 00;
        int minutes = 00;
        int hours = 00;

        printf("Enter seconds: \n");
        scanf("%d",&iseconds);

        hours = iseconds / 3600;
        iseconds %= 3600;
        minutes = iseconds / 60;
        iseconds %= 60;
        seconds = iseconds / 1;

        printf("Seconds: %d\n", seconds);
        printf("Minutes: %d\n", minutes);
        printf("Hours: %d\n", hours);

        printf("The time is %.2d:%.2d:%.2d", hours, minutes, seconds);
        printf("\nDo you want to try again? Yes = 1, No = 0\n");
        scanf ("%d", &trial);
        } while (trial == 1);
        }
        else if (choice1 == 4)
        {
            printf("Do you really want to exit? Yes = 1, No = 0\n");
            scanf("%d", &confirmation);
            if (confirmation > 1 || confirmation < 0)
            {
                printf("Error, option does not exist.\n");
                return 2;
            }
            else if (confirmation == 1)
            {
                printf("\nAre you sure? Yes = 1, No = 0\n");
                scanf("%d", &confirmation1);
                if (confirmation1 = 1)
                return 0;
            }
                
        }
        } while (confirmation != 1);
        if (choice > 4)
        printf("Erorr in selection.\n");
        printf("\nAre you sure? Yes = 1, No = 0\n");
        scanf ("%d", &confirmation);
        if (confirmation == 1)
        return 0;

        }
