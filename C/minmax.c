#include <stdio.h>

int main()
{
    int size;
    printf("Input the size of the array: ");
    scanf("%d", &size);
    int arrArray[size];
    // Input
    for (int i = 0; i < 3; i++)
    {   
        printf("Element - %d: ", i);
        scanf("%d", &arrArray[i]);
    }
    int max = arrArray[0];
    int minimum = arrArray[0];

    // Finding maximum
    for (int i = 0; i < 3; i++)
    {
        if (max < arrArray[i])
            max = arrArray[i];
    }

    // Finding minimum

    for (int i = 0; i < 3; i++)
    {
        if (minimum > arrArray[i])
            minimum = arrArray[i];
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", minimum);

    return 0;
}