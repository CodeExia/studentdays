#include <stdio.h>

int factorial(int bruh);
int main()
{
    int num;
    int ah;

    printf("Give me a number:\n");
    scanf("%d", &num);

    ah = factorial(num);

    printf("%d", ah);

    return 0;

}

int factorial(int x)
{
    int result;
    result = x;

    while (x !=1)
    {
        result = result * (x-1);
        x--;
    }

    return result;
}
