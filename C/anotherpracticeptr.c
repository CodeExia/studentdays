#include <stdio.h>

void printArr(int array[][3])
{
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
    {
            if (array[i][j]%2 == 0)
                sumEven += array[i][j];
            else
                sumOdd += array[i][j];
    }
    printf("\nThe sum of all even numbers are %d.\n", sumEven);
    printf("The sum of all odd numbers are %d.\n", sumOdd);

    return;
}

void printArrasptr(int array[][3])
{
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
    {
            if (*(*(array+i)+j)%2 == 0)
                sumEven += *(*(array+i)+j);
            else
                sumOdd += *(*(array+i)+j);
    }
    printf("\nThe sum of all even numbers are %d.\n", sumEven);
    printf("The sum of all odd numbers are %d.\n", sumOdd);

    return;
}

void printPtr(int *ptr)
{
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
    {
            if (*((ptr+i*3)+j)%2 == 0)
                sumEven += *((ptr+i*3)+j);
            else
                sumOdd += *((ptr+i*3)+j);
    }
    printf("\nThe sum of all even numbers are %d.\n", sumEven);
    printf("The sum of all odd numbers are %d.\n", sumOdd);

    return;
}

int main()
{
    int array[3][3] = {1,2,3,4,5,6,7,8,9};

    printArr(array);
    printArrasptr(array);
    printPtr(&array[0][0]);


    return 0;
}

