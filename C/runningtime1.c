#include <stdio.h>

int main()
{
    int n = 50;
    int sum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i*i; ++j)
            for (int k = 0; k < j; ++k)
                ++sum;
    printf("%d", sum);
    return 0;
}