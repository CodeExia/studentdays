#include <stdio.h>
void try(int x[], int z);

int main()
{
    int a[] = {2,6,8,1,4,3,234,53,1,24};
    int b[20] = {1,3,5,7,9};
    int bruh = sizeof(a[0]);

    try(a, bruh);
    return 0;
}

void try(int x[], int z)
{
    int y = 0;
    for (y=0; y<=z; ++y)
    printf("%d\t", x[y]);

}