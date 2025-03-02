#include <stdio.h>

void bubbleSorting(int array[])
{
	int temp;
	for (int i = 0; i < 10 - 1; i++)
		for (int j = 0; j < 10 - 1; j++)
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		
}

void selectionSort(int array[])
{
	int temp;
	int index;
	
	for (int i = 0; i < 10; i++)
	{
		index = i;
		for (int j = i+1; j < 10; j++)
			if (array[index] > array[j])
			index = j;
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}
}

void insertionSort(int array[])
{
	int temp;
	int j;
	
	for (int i = 1; i < 10; i++)
	{
		temp = array[i];
		j = i-1;
		while (j >= 0; array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}
}

int main()
{
	return 0;
}