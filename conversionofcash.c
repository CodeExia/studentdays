#include <stdio.h>

int main()
{
    char name [80];
    int input;
    int thousand;
    int fiveh;
    int oneh;
    int fifty;
    int twenty;
    int ten;
    int five;
    int one;
    int input1;

    printf("Please enter your name:\n");
    scanf("%s", &name);
    printf("How much cash do you have on hand?\n");
    scanf("%d", &input);

    input1 = input;

    thousand = input / 1000;
    input = input % 1000;
    fiveh = input / 500;
    input = input % 500;
    oneh = input / 100;
    input = input % 100;
    fifty = input / 50;
    input = input % 50;
    twenty = input / 20;
    input = input % 20;
    ten = input / 10;
    input = input % 10;
    five = input / 5;
    one = input / 1;

    printf("%s, here is your data:\n",name);
    printf("Cash on hand: %d\n", input1);
    printf("1000s: %d\n",thousand);
    printf("500s: %d\n",fiveh);
    printf("100s: %d\n",oneh);
    printf("50s: %d\n",fifty);
    printf("20s: %d\n",twenty);
    printf("10s: %d\n",ten);
    printf("5s: %d\n",five);
    printf("1s: %d\n",one);

    

    return 0;
}