#include <stdio.h>
#include <string.h>

int main()
{
    char name [80];
    int hw;
    int wt;
    int gp;
    int np;

    printf("Please enter your name:\n");
    scanf("%s", &name);
    printf("Please enter your work hours:\n");
    scanf("%d",&hw);
    printf("%s here is your data:\n",name);
    printf("Hourly rate: 281\n");
    printf("Hours worked: %d\n",hw);
    gp = hw * 281;
    printf("Gross pay: %d\n",gp);
    wt = gp * .32;
    printf("Withholding tax: %d\n",wt);
    np = gp - wt;
    printf("Net pay: %d\n",np);

    return 0;
}