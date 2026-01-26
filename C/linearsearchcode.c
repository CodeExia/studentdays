


int linearSearch(int array[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
            return array[i];
    }
    
    return -1;
}