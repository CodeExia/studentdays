#include <stdio.h>

void printArr(int array[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (array[i][j]%2 == 0)
                printf("%d ", array[i][j]);
    printf("\n");
    return;
}

void printArrasptr(int array[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if ((*(*(array+i)+j))%2 == 0)
                printf("%d ", (*(*(array+i)+j)));
    printf("\n");
    return;
}

void printPtr(int *ptr)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (*((ptr+i*3)+j)%2 == 0)
                printf("%d ", *((ptr+i*3)+j));
    printf("\n");
    return;
}

void printPtrtwo(int (*ptr)[3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if ((*(*(ptr+i)+j))%2 == 0)
                printf("%d ", *(*(ptr+i)+j));
    printf("\n");
    return;
}

int main()
{
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printArr(array);
    printArrasptr(array);
    printPtr(&array[0][0]);
    printPtrtwo(array);

    return 0;
}





