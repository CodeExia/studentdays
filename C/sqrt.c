#include <stdio.h>

#include <math.h>

int mySqrt(int x) {
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    
    unsigned int start = 1;
    unsigned int end = x;
    unsigned int mid;
    while (true)
    {
        mid = start + (end - start)/2;
        if (start >= end)
            return floor(end);
        if ((mid*mid) > x)
            end = mid-1;
        else if ((mid*mid) == x)
            return floor(mid);
        else if ((mid*mid) < x)
            start = mid+1;
    }
}

int main()
{
    printf("%d", mySqrt(8));
    return 0;
}