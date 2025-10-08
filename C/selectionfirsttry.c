#include <stdio.h>

int main()
{
    int temp;
    int temp2;
    int counter;
    int unsorted[] = {123,53,7,65,3,213,756,897,455,567,876,234,325,200,100,321,213};

    for (int i = 0; i < 17; i++)
    {
        for (int t = 0; t < 17; t++)
        {
            temp = unsorted[t];
            while (counter < 17)
            {
                if (unsorted[t] < unsorted[counter]);
                {
                    temp = unsorted[counter];
                }
                
                counter++;
            }
        }
    }








}