#include <stdio.h>

int main()
{
    long a;
    printf("How many subjects do you have?\n");
    scanf("%d", &a);
    long grades[a];

    for (int i = 0; i <= a; i++, grades[a] + grades[++a])
    {
        printf("Input a grade:\n");
        scanf("%d", &grades[a++]);

    }
    

}