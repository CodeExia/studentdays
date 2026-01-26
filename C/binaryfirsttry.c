#include <stdio.h>

int main()
{
    int sortedArray[] = {1,2,3,4,5,6,7,8,9,10};
    

    return 0;
}

int binarySearch(int array[], int key)
{
    int sizearray = (sizeof(array)/sizeof(array[0]));
    // Just gets the size of the array
    int left = 0;
    int right = sizearray - 1;

    while (left <= right)
    {
        int mid = (left + right)/2;
        if (key == array[mid])
            return mid;
        else if(key < array[mid])
            right = mid - 1;
        else 
            left = mid + 1;
    }

    return -1;
    // Only returns -1 if the number isn't found.
}