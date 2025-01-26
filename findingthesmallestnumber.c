#include <stdio.h>

int main()
{
    int i = 0;
    int temp;
    int array[] = {1,20,31,44,55,63,71,83,98,110,112,123,135,140,151,162,174,183,196,207};

    temp = array[i];

    for (int i = 0; i < 20; i++)
    {
        if (array[i] < array[i+1])
        {
            temp = array[i]
        }
    }

    printf("%d", temp)
}