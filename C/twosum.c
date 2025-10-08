#include <stdio.h>

int i;
int g;
int a;
int b;
int c;
int d;

int num [] = {2, 7, 11, 15};
int target; 

int main()
{
    printf("What is your targeted number?\n");
    scanf("%d", &target);

    for (i = 0; i < 4; ++i)
    {
        if (num[i] + num[++i] == target)
        {
            printf("%d and %d\n", num[i], num[++i]);
            return 0;
        }
        else
        {
            ++i;

        }
        return 0;
    }
    printf("Error\n");
    return 1;

}

//to be fair, this is my first attempt without actually even researching shit. I'll try with the while loop next time.