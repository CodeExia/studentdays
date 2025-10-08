#include <stdio.h>

void pyramid(int k);

int main()
{
    int height;

    printf("Height: ");
    scanf("%d", &height);

    pyramid(height);
}

void pyramid(int k)
{
    for (int i = 0; i < k; ++i)
    {
        for (int f = 0; f < i + 1; ++f)
        printf("#");
        printf("\n");
    }
}