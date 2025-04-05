#include <stdio.h>
#include <conio.h>

void increment();

void main()
{
    increment();
    increment();
    increment();

}

void increment()
{
    static int i = 1;
    printf("%d\t", i);
    i++;
    getch();
}