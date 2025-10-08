#include <stdio.h>

int main()
{

}

void selectionSort(int array[], int number)
{
    for (int i = 0; i < number - 1; i++ )
    {
        int min = i;
        for (int j = i +1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}