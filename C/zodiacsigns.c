#include <stdio.h>

int main()
{
    int inputmonth, inputday;
    char name [80];

    printf("What is your name?\n");
    scanf("%s", name);
    printf("What is your birthmonth? (1-12)\n");
    scanf("%d", &inputmonth);
    printf("What is your birthday? (day)\n");
    scanf("%d", &inputday);

    if (inputmonth == 1)
    {
        if (inputday >= 20 && inputday <= 31)
        {
            printf("%s you are a ♒!\n", name);
            return 0;
        }
        else if (inputday >= 1 && inputday <= 19)
        {
            printf("%s you are a ♑!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 2)
    {
        if (inputday >= 1 && inputday <= 18)
        {
            printf("%s you are a ♒!\n", name);
            return 0;
        }
        else if (inputday >= 19 && inputday <= 29)
        {
            printf("%s you are a ♓!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 3)
    {
        if (inputday >= 1 && inputday <= 20)
        {
            printf("%s you are a ♓!\n", name);
            return 0;
        }
        else if (inputday >= 21 && inputday <= 31)
        {
            printf("%s you are a ♈!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 4)
    {
        if (inputday >= 1 && inputday <= 19)
        {
            printf("%s you are a ♈!\n", name);
            return 0;
        }
        else if (inputday >= 20 && inputday <= 30)
        {
            printf("%s you are a ♉!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 5)
    {
        if (inputday >= 1 && inputday <= 20)
        {
            printf("%s you are a ♉!\n", name);
            return 0;
        }
        else if (inputday >= 21 && inputday <= 31)
        {
            printf("%s you are a ♊!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 6)
    {
        if (inputday >= 1 && inputday <= 21)
        {
            printf("%s you are a ♊!\n", name);
            return 0;
        }
        else if (inputday >= 22 && inputday <= 30)
        {
            printf("%s you are a ♋!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 7)
    {
        if (inputday >= 1 && inputday <= 22)
        {
            printf("%s you are a ♋!\n", name);
            return 0;
        }
        else if (inputday >= 23 && inputday <= 31)
        {
            printf("%s you are a ♌!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 8)
    {
        if (inputday >= 1 && inputday <= 22)
        {
            printf("%s you are a ♌!\n", name);
            return 0;
        }
        else if (inputday >= 23 && inputday <= 31)
        {
            printf("%s you are a ♍!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 9)
    {
        if (inputday >= 1 && inputday <= 22)
        {
            printf("%s you are a ♍!\n", name);
            return 0;
        }
        else if (inputday >= 23 && inputday <= 30)
        {
            printf("%s you are a ♎!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 10)
    {
        if (inputday >= 1 && inputday <= 23)
        {
            printf("%s you are a ♎!\n", name);
            return 0;
        }
        else if (inputday >= 24 && inputday <= 31)
        {
            printf("%s you are a ♏!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 11)
    {
        if (inputday >= 1 && inputday <= 21)
        {
            printf("%s you are a ♏!\n", name);
            return 0;
        }
        else if (inputday >= 22 && inputday <= 30)
        {
            printf("%s you are a ♐!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else if (inputmonth == 12)
    {
        if (inputday >= 1 && inputday <= 21)
        {
            printf("%s you are a ♐!\n", name);
            return 0;
        }
        else if (inputday >= 22 && inputday <= 31)
        {
            printf("%s you are a ♑!\n", name);
            return 0;
        }
        else
        {
            printf("Error, inputted day doesn't exist.\n");
            return 1;
        }
    }
    else
    {
        printf("Error, inputted month doesn't exist");
        return 2;
    }

    return 1;

