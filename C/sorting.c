#include <stdio.h>

int main()
{
    int size;
    printf("Input the size of the array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < 5; i++)
    {   
        printf("Element - %d: ", i);
        scanf("%d", &array[i]);
    }
    // Sorting algorithm (Bubble Sort)

    int temp;
    for (int i = 0; i < 4 ;i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);

    return 0;
}