int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid;  // Found, so we return index
        }
        else if (array[mid] < target) {
            left = mid + 1;  // Search the right half
        }   
        else {
            right = mid - 1; // Search the left half
        }
    }
    return -1; // Not found
}
