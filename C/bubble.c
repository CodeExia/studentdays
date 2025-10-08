#include <stdio.h>

int main()
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int t = 0; t < size; t++)
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