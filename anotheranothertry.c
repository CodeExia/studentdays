#include <stdio.h>

struct books
{
    char title[80];
    char name[80];
    int price;
};

int main()
{
    struct books book1 = {"Bruh", "Welp", 100};
    struct books book2 = {"Hehe", "Haha", 200};
    struct books book3 = {"Huhu", "Hoho", 300};

    struct books book[3];

    book[0] = book1;
    book[1] = book2;
    book[2] = book3;

    int low = 0;
    for (int i = 0; i < 3; i++)
        {
            if (book[i].price < book[low].price)
                low = i;
        }


        int high = 0;
        for (int i = 0; i < 3; i++)
            {
                if (book[i].price > book[high].price)
                    high = i;
            }

    printf("The most expensive book is: %s\nPriced at:%d\nAuthored by:%s\n\n", book[high].title, book[high].price, book[high].name);
    printf("The least expensive book is: %s\nPriced at:%d\nAuthored by:%s\n", book[low].title, book[low].price, book[low].name);
    
    return 0;
}