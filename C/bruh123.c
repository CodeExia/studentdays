#include <stdio.h>

struct book {
    char title[80];
    char author[80];
    int price;
};

int main() {
    struct book b1 = {"1984", "George Orwell", 150};
    
    printf("Title: %s, Author: %s, Price: %d\n", b1.title, b1.author, b1.price);

    return 0;
}
