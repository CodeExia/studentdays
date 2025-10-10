#include <stdio.h>

int main()
{
    int array[5] = {1,2,3,4,5};

    printf("Before updating:\n");
    // Traversing this array
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nAfter updating:\n");

    // Update index 3 into 10
    array[3] = 10;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}