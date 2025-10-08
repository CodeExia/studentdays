
void assign(int twoD[][], int oneD[], int decision)
{
    int z = 0;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (decision == 1)
                oneD[z++] = array[i][j];
            else if (decision == 2)
                twoD[i][j] = neD[z++];
        }
    }
}

assign(twoD, oneD, 1);


void bubbleSort(int array[])
{
    int temp;

    for (int i = 0; i < 10 - 1; i++)
        for (int j = 0; j < 10 -1 - i; j++)
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
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
        while (j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }
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

int binarySearch(int array[], int key, int size)
{
    int left = 0;
    int right = size - 1;
    

    while (left <= right)
    {
        mid = (left+right)/2;
        if [array[mid] == key] 
            return mid;
        else if (array[mid] > key)
            right = mid - 1;
        else 
            left = mid + 1;
    }

    return -1;
}