#include <stdio.h>

int main()
{
    char stack[100];
    int top = -1;
    char ch;
    
    printf("Enter characters, it will stop when you enter a vowel. \n");
    while (1)
    {
        scanf(" %c", &ch);
        if (ch == '*')
            break;
        stack[++top] = ch;
    }

    printf("Third to the last character before asterisk: ");
    printf("%c ", stack[top-2]);
}