#include <stdio.h>

int main()
{
    int left = 0, right = sizearray - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right)/2;
        if (number == array[mid])
            return mid;
        else if(key < array[mid])
            right = mid - 1;
        else 
            left = mid + 1;
    }
}