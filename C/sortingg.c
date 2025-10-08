#include <stdio.h>

void selectionSorting(int array[]);
int main()
{
    int bruh[7];

    printf("Please enter seven numbers:\n");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &bruh[i]);
    }

    printf("Unsorted: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", bruh[i]);
    }

    selectionSorting(bruh);

    printf("Sorted: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", bruh[i]);
    }
    return 0;
}




void selectionSorting(int array[])
{
    int index;
    int temp;

    for (int i = 0; i < 7; i++)
    {
        index = i;
        for (int t = i+1; t < 7; t++)
        {
            if (array[t] < array[index])
            {
            index = t;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
}