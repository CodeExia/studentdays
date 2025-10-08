#include <stdlib.h>
#include <stdio.h>

void swap(int array[], int size);
int main()
{
    int size;
    int *index;

    int bruh[5] = {1,2,3,4,5};

    printf("Please enter the size of your array:\n");
    scanf("%d", &size);

    index = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        scanf("%d", (index+i));
    printf("\n");

    for (int i = 0; i < size; i++)
        printf("%d ", *(index+i));
    printf("\n");

    swap(index, size);

    for (int i = 0; i < size; i++)
        printf("%d ", *(index+i));
    printf("\n");

    return 0;
}

void swap(int array[], int size)
{
    int left = 0;
    int right = size - 1;
    int temp;

    while (left < right)
    {
        temp = *(array+left);
        *(array+left++) = *(array+right);
        *(array+right--) = temp;
    }
}