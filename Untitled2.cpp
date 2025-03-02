#include <stdio.h>

void insertionSort(int array[]);
void bubbleSort(int array[]);
void selectionSort(int array[]);
void swap(int twoD[][2], int oneD[], int decision);
void printTwoD(int twoD[][2]);

int main()
{
	int decision = 1;
	do {
	
	
	int twoD[][2] = {10,9,8,7,6,5,4,3,2,1};
	int oneD[10];
	
	printTwoD(twoD);
	
	printf("\n");
	swap(twoD, oneD, 2);
	
	for (int i = 0; i < 10; i++)
		printf("%d", oneD[i]);
	
	printf("\n");
	
	selectionSort(oneD);
	swap(twoD, oneD, 1);
	
	printTwoD(twoD);
	
	printf("\n");
	
	printf("Do you want to try again? (1 for yes, anything else for no)\n");
	scanf("%d", &decision);
	} while (decision == 1);
	
	return 0;
}

void insertionSort(int array[])
{
	int temp;
	int j;
	
	for (int i = 1; i < 10; i++)
	{
		temp = array[i];
		j = i-1;
		while (j >= 0 && array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}
}

void bubbleSort(int array[])
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
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}
}

void swap(int twoD[][2], int oneD[], int decision)
{
	int z = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		{
			if (decision == 1)
				twoD[i][j] = oneD[z++];
			else if (decision == 2)
				oneD[z++] = twoD[i][j];
		}
}

void printTwoD(int twoD[][2])
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		printf("%d", twoD[i][j]);
}