#include <stdio.h>

void bubbleSorting(int array[]);
int main()
{
    int array[7];

    printf("Please enter 7 numbers:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nHere is the unsorted array:");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }

    bubbleSorting(array);

    printf("\n");
    printf("\nHere is the sorted array:");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
}

void bubbleSorting(int array[])
{
    int temp;
    int index;
    int j;

    for (int i = 0; i < 7; i ++)
    {
        temp = array[i];
        j = i-1;
        while (j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

}