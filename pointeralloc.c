#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int counter = 0;
    int sum = 0;
    array = (int*)malloc(5*sizeof(int));

    //assignment loop
    for (int i = 0; i < 5; i++)
    {
        *(array+i) = i+1;
    }


    for (int i = 0; i < 5; i++)
    {
        sum +=*(array+i);
    }

    printf("%d is the sum of all odd and even numbers.\n", sum);
    return 0;
}