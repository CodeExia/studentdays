#include <stdio.h>

int main()
{
    int age;
    int ipa;

    printf("Please enter your age:\n");
    scanf("%d", &age);

    ipa = age / 2;
    ipa = ipa + 7;

    printf("Your ideal partner's age is: %d", ipa);
    
    return 0;
}