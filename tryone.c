#include <stdio.h>
#include <stdlib.h>

void reorder(int n, int *x)
{
    int i, item, temp;

    for (item = 0; item < n; item++)
        for (i = item+1; i < n; item++)
            if (*(x+1) < *(x + item))
            {
                temp = *(x+item);
                *(x+item) = *(x+i);
                *(x+i) = temp;
            }
}

int main ()
{
    int i, n, *x;

    void reorder(int n, int *x);
    printf("How many numbers will be entered?\n");
    scanf("%d", &n);
    printf("\n");

    x = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("i = %d x =", i+1);
        scanf("%d", x + i);
    }

    reorder(n,x);
    printf("\n Reordedrd list of numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("i = %d x = %d\n", i + 1, *(x+1));
    }

    return 0;
}

