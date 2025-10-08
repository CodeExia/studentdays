#include <stdio.h>

int main()
{
    int unsorted[] = {123,53,7,65,3,213,756,897,455,567,876,234,325,200,100,321,213};
    int i,f,temp;

    for (int i = 0; i < 17; i++)
    {
        for (int f = 0; f < 17; f++)
        {
            if (unsorted[i] > unsorted[f])
            {
                temp = unsorted[i];
                unsorted[i] = unsorted[f];
                unsorted[f] = temp;
            }
            else if (unsorted[i] > unsorted[f])
                printf("Index: %d is already sorted\n", unsorted[i]);
        }
    }

    for (int print = 0; print < 17; print++)
    {
        printf("%d ", unsorted[print]);
    }
    return 0;

}