#include <stdio.h>

void selectionSorting(int array[]);

int main()
{
    int array[7];
    
    printf("Please enter 7 numbers:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("\nHere is the unsorted array:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", array[i]);
    }

    selectionSorting(array);

    printf("\nHere is the sorted array:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", array[i]);
    }

    return 0;

}

void selectionSorting(int array[])
{
    int temp;
    int index;

    for (int i = 0; i < 7; i++)
    {
        index = i;
        for (int j = i+1; j < 7; j++)
        if (array[j] < array[index])
        index = j;
        
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

}