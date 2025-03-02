#include <stdio.h>

void bubbleSort(int array[])
{
    int temp;
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSort(int array[])
{
    int index;
    int temp;
    for (int i = 0; i < 10; i++)
    {
        index = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }
        temp = array[index];
        array[index] = array[i];
        array[i] = temp;
    }
}

void insertionSort(int array[])
{
    int temp;
    int index;
    
}

int main()
{
    int array[] = {10,9,8,7,6,5,4,3,2,1};

    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);

    printf("\n");

    selectionSort(array);
    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);

    return 0;


}