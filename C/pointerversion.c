#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1,2,3,4,5};
    int even = 0;
    int odd = 0;
    int *pointer = array;


    for (int i = 0; i < 5; i++)
    {
        if (*(array+i)%2==0)
            even +=*(pointer+i);
        else
            odd +=*(pointer+i);
    }

    printf("%d is the sum of all odd numbers.\n", odd);
    printf("%d is the sum of all even numbers.\n", even);
    return 0;
}