

void insertionSort(int array[]);
{
    int temp;
    int j;
    
    fop (int i = 1; i < 7; i++)
    {
        temp = array[i];
        j = i-1;
        
        while(j >= 0 && array[j] > temp)
        {
            array[j] = array[j+1]; 
            j--;
        }
        array[j+1] = temp;
    }
}

void selectionSort(int array[])
{
    int temp;
    int index;
    
    for (int i = 0; i < 7; i++)
    {
        index = i;
        for (int j = i+1; j < 7; j++)
        {
            index = j;
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
}

void bubbleSort(int array[])
{
    int temp;
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
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
