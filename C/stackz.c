#include <stdio.h>

int main()
{
    char stack[100];
    int top = -1;
    char ch;
    
    printf("Enter characters, it will stop when you enter 'Z\n");
    while (1)
    {
        scanf(" %c", &ch);
        if (ch == 'Z' || ch == 'z')
            break;
        stack[++top] = ch;
    }

    printf("Characters stored before 'Z: ");
    for (int i = top; i >= 0; i--)
        printf("%c ", stack[i]);
}