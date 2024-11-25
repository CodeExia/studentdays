#include <stdio.h>

int i;
int g = 0;

int num [] = {2, 7, 11, 15};
int target; 

int main()
{
    printf("What is your targeted number?\n");
    scanf("%d", &target);

    for (int g = 0; g < 4; ++g)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (num[g] + num[i + 1] == target)
            {
                printf("%d and %d\n", num[g], num[i + 1]);
                return 0;
            }
        }
    }
    
    printf("Error\n");
    return 1;

}

//to be fair, this is my first attempt without actually even researching shit. I'll try with the while loop next time.
