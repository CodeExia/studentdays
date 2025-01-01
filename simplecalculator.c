#include <stdio.h>

int main()
{
    int number1, number2, result;
    int operation, choice, confirmation;

    do
    {
        printf("What operations do you want to do?\n");
        printf(" 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n 5 to Exit\n");
        scanf("%d", &operation);

        if (operation == 5)
            return 1;
        else if (operation < 1 || operation > 5)
        {
            printf("Error, choice not within bounds.\n");
            return 2;
        }

        printf("What is your first number?\n");
        scanf("%d", &number1);
        printf("What is your second number?\n");
        scanf("%d", &number2);

        switch (operation)
        {
        case 1: 
            {
                result = number1 + number2;
                printf("%d", result);
                break;   
            }
        case 2:
            {
                result = number1 - number2;
                printf("%d", result);
                break;
            }
        case 3:
            {
                result = number1 * number2;
                printf("%d", result);
                break;
            }
        case 4:
            {
                result = number1 / number2;
                printf("%d", result);
                break;
            }
        }
        
        printf("\nDo you want to try again? Yes = 1, No = anything else.\n");
        scanf("%d", &confirmation);
    }while (confirmation != 0);

}