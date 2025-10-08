#include <stdio.h>

int binarySearch(int a[], int n, int key);

int main()
{
    int bruh[] = {1,2,3,4,5,6,7,8,9,10};
    int number;
    int index;


    printf("Please enter the number you want to find:\n");
    scanf("%d",&number);
    index = binarySearch(bruh, 10, number);

    if (index < 0)
    {
        printf("Error, not found.\n");
        return 1;
    }
    
    printf("Your number is found at %d", index);
    return 0;
}

int binarySearch(int a[], int n, int key)
{   
    int MID;
    int L = 0, R = n -1;
    while(L <=R)
    {   
        MID = (L + R) / 2;
        if ( key == a[MID])
            return MID;
        else if(key < a[MID])
            R = MID -1;
        else
            L = MID + 1;
    }
    return -1;
}