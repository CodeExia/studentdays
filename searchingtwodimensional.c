#include <stdio.h>

int dividebythree(int array[][3], int column, int row);


int main()
{
        int array[3][3];
        int key;
        int element = 1;
        int bruh;

        printf("Please enter 6 numbers:\n");

        for (int i = 0; i < 3; i++)
        {
            for (int t = 0; t < 3; t++)
            {
                scanf("%d", &array[i][t]);
            }
         
        }

        printf("\n");

        for (int i = 0; i < 3; i++)
        {
            for (int t = 0; t < 3; t++)
            {
                printf("%d ", array[i][t]);
            }
            printf("\n");
        }

        printf("\n");
        dividebythree(array, 3, 3);
        
    return 0;
}

int dividebythree(int array[][3], int column, int row)
{
    for (int i = 0; i < column; i++)
        for (int j = 0; j < row; j++)
            {
                if ((array[i][j]%3) > 0)
                    continue;
                else
                    printf("%d is divisible by three, and can be found at [%d][%d].\n", array[i][j], i,j);
            }
    return 0;
}