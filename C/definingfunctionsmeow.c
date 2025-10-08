#include <stdio.h>

void meow(int n);

int main()
{
    int k;
    printf("How many times do you want the cat to meow?\n");
    scanf("%d", &k);
    meow(k);
}

void meow(int n)
{
    for (int counter = 0; counter < n; counter++)
    {
        printf("Meow!\n");
    }
}