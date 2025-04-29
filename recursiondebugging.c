#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number:\n");
    scanf("%d", &number);

    if (number == 0)
        return 0;

    main();

    printf("%d\t", number);
}