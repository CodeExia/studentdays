#include <stdio.h>

int main()
{
    int array[5] = {1,2,3,4,5};
    int evenarray = 0;
    int oddarray = 0;
    int evenpointer = 0;
    int oddpointer = 0;
    int evenact = 0;
    int oddact = 0;
    int *pointer = array;

    //Arrays
    for (int i = 0; i < 5; i++)
    {
        if (array[i]%2==0)
            evenarray +=array[i];
        else
            oddarray +=array[i];
    }

    //Arrays acting as points
    for (int i = 0; i < 5; i++)
    {
        if (*(array+i)%2==0)
            evenact +=*(array+i);
        else
            oddact +=*(array+i);
    }

    //Pointers
    for (int i = 0; i < 5; i++)
    {
        if (*(pointer+i)%2==0)
            evenpointer +=*(pointer+i);
        else
            oddpointer +=*(pointer+i);
    }


    printf("Arrays:\n");
    printf("%d is the sum of all odd numbers.\n", oddarray);
    printf("%d is the sum of all even numbers.\n", evenarray);
    printf("Arrays as pointers:\n");
    printf("%d is the sum of all odd numbers.\n", oddact);
    printf("%d is the sum of all even numbers.\n", evenact);
    printf("Pointers:\n");
    printf("%d is the sum of all odd numbers.\n", oddpointer);
    printf("%d is the sum of all even numbers.\n", evenpointer);

    return 0;
}