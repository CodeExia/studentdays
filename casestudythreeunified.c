#include <stdio.h>

int dwarfArray(int array[]);
int dwarfArrayasPointer(int array[]);
int dwarfPointer(int array[]);

int main()
{
    int array[5] = {5,2,6,8,10};

    dwarfArray(array);
    dwarfArrayasPointer(array);
    dwarfPointer(array);

    return 0;
}

int dwarfArray(int array[])
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

int dwarfPointer(int array[])
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

int dwarfArrayasPointer(int array[])
{
    int sum = 0;
    double half;
    for (int x = 0; x < 5; x++)
    {
        printf("\nFactors of %d:\n", *(array+x));
        for (int factor = 1; factor < *(array+x); factor++)
        {
            if (*(array+x)%factor==0)
            {
                printf("%d ", factor);
                sum += factor;
            }
            
        }
        printf("\nThe sum of its factor: %d\n", sum);
        half = *(array+x)/2.0;
        printf("Half of the number is %.2f\n", half);
        if (sum > half)
        {
            printf("%d is a DWARF.\n", *(array+x));
        }
        else 
        {
            printf("%d is NOT DWARF.\n", *(array+x));
        }
        sum = 0;
    }
    return 0;
}