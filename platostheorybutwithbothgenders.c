#include <stdio.h>

int main()
{
    int age;
    int ipa;
    char gender;

    printf("Please enter your gender in character (f/m):\n");
    scanf("%c", &gender);

    if (gender == 'm')
    {
        printf("Please enter your age:\n");
        scanf("%d", &age);

        ipa = age / 2;
        ipa = ipa + 7;

        printf("Your ideal partner's age is: %d", ipa);
    }
    else
    {
        printf("Please enter your age:\n");
        scanf("%d", &age);

        ipa = age - 7;
        ipa = ipa * 2;

        printf("Your ideal partner's age is: %d", ipa);
    }
    
    return 0;
}