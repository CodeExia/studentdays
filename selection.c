#include <stdio.h>

int main()
{
    int array[] = {1,20,31,44,55,63,71,83,98,110,112,123,135,140,151,162,174,183,196,207};
    int size;
    int temp;

    size = (sizeof(array)/sizeof(array[0]));

    for (int i = 0; i <= size; i++)
    {
        for (int t = 0; t < size; t++ )
        {
            if (array[i] < array[t+1])
            {
                continue;
            }
            else if (array[i] > array)
        }
        
    }