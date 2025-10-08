#include <stdio.h>

int main()
{
    int x, y;
    int size;

    printf("Please enter the number of columns:\n");
    scanf("%d", &x);
    printf("Please enter the number of rows:\n");
    scanf("%d", &y);

    int array[x][y];

    printf("Please enter the numbers you want to store in the array:\n");

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", &array[i][j]);
    
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            printf("%d ", array[i][j]);

    size = sizeof(array[][]/array[0][0]);

    printf("%d", size);
    
    return 0;
}

