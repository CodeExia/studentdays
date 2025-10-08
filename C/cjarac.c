#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[80] = "CS";
    char b[80] = "PUP";
    printf("%d", strlen(a));

    if (isxdigit('a'))
    printf("Hello");
    else
    printf("Hi");

    return 0;
}