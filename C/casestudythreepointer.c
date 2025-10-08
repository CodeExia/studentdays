#include <stdio.h>

int dwarf(int array[]);

int main()
{
    int array[5] = {5,2,6,8,10};

    dwarf(array);
    return 0;
}

int dwarf(int array[])
{
    int sum = 0;
    double half;
    int *ptr = array;

    for (int x = 0; x < 5; x++)
    {
        printf("\nFactors of %d:\n", *(ptr+x));
        for (int factor = 1; factor < *(ptr+x); factor++)
        {
            if (*(ptr+x)%factor==0)
            {
                printf("%d ", factor);
                sum += factor;
            }
            
        }
        printf("\nThe sum of its factor: %d\n", sum);
        half = *(ptr+x)/2.0;
        printf("Half of the number is %.2f\n", half);
        if (sum > half)
        {
            printf("%d is a DWARF.\n", *(ptr+x));
        }
        else 
        {
            printf("%d is NOT DWARF.\n", *(ptr+x));
        }
        sum = 0;
    }
    return 0;
}

