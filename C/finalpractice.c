

void insertionSort(int array[])
{
    int temp;
    int j;

    for (int i = 1; i < 10; i++)
    {
        temp = index[i];
        j = i - 1;
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

    for (int i = 0; i < 10-1; i++)
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
        for (int j = i + 1; j < 10; j++)
            if (array[index] > array[j])
                index = j;
            temp = array[index];
            array[index] = array[i];
            array[i] = temp;
    
    }
}

int binarySearch(int array[], int size;, int key)
{
    int left = 0, int right = size - 1, int mid;

    while (left <= right)
    {
        mid = (left+right)/2;
            if (key == array[mid])
                return mid;
            else if (key < array[mid])
                right = mid-1;
            else if (key > array[mid])
                left = mid+1;
    }


}