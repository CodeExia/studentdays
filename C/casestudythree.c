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
    for (int x = 0; x < 5; x++)
    {
        printf("\nFactors of %d:\n", array[x]);
        for (int factor = 1; factor < array[x]; factor++)
        {
            if (array[x]%factor==0)
            {
                printf("%d ", factor);
                sum += factor;
            }
            
        }
        printf("\nThe sum of its factor: %d\n", sum);
        half = array[x]/2.0;
        printf("Half of the number is %.2f\n", half);
        if (sum > half)
        {
            printf("%d is a DWARF.\n", array[x]);
        }
        else 
        {
            printf("%d is NOT DWARF.\n", array[x]);
        }
        sum = 0;
    }
    return 0;
}

