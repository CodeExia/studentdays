#include <stdio.h>

int main()
{
    for(gap = n/2; gap >=1; gap/2)
    { for(j = gap; j < n; j++)
        { 
            for(i = j – gap; i >= 0; i – gap)
        { 
            if(a[i + gap] > a[i])
            { 
                break;
            }
            else
            { swap(a[i + gap], a[i]);
            }
        }
        }
    }
}