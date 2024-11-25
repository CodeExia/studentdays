#include <stdio.h>

int i;
int k;

int num [] = {2, 7, 11, 15};
int target; 

int main()
{
    printf("What is your targeted number?\n");
    scanf("%d", &target);

    for (int k = 0; k < 4; ++k)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (num[k] + num[i + 1] == target)
            {
                printf("%d and %d\n", num[k], num[i + 1]);
                return 0;
            }
        }
    }
    
    printf("Error\n");
    return 1;

}

//to be fair, this is my first attempt without actually even researching shit. I'll try with the while loop next time.
