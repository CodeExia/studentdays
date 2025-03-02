#include <stdio.h>

int main()
{

    int decision = 1;
    while (decision == 1);
    {
        int array[2][3];
        int key;
        int element = 1;
        int bruh;

        printf("Please enter 6 numbers:\n");

        for (int i = 0; i < 2; i++)
        {
            for (int t = 0; t < 3; t++)
            {
                scanf("%d", &array[i][t]);
            }
        }

        printf("Please enter the number you want to find.\n");
        scanf("%d", &key);

        for (int bruh = 0; bruh < 2; bruh++);
        {
            for (int t = 0; t < 3; t++)
            {
                if (array [bruh][t] == key)
                {
                    printf("Your number exists at array[%d][%d]", bruh, t);
                    printf("and is the %d element.\n", element);
                    break;
                }
                element++;
            }
        }

        if (element > 6)
        {
            printf("Your number does not exist.\n");
        }

    }

    
    return 0;
}