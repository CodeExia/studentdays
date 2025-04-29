#include <stdio.h>
#include <string.h>

struct book
{
    char title[80];
    char author[80];
    int price;
}books[3];

int main()
{
  
        // Assigning values to each struct in the array
        strcpy(books[0].title, "Sun");
        strcpy(books[0].author, "Moon");
        books[0].price = 100;
    
        strcpy(books[1].title, "Sea");
        strcpy(books[1].author, "Mountain");
        books[1].price = 200;
    
        strcpy(books[2].title, "Sky");
        strcpy(books[2].author, "Earth");
        books[2].price = 300;
    
        int highest_index = 0;
        for (int i = 1; i < 3; i++) {
            if (books[i].price > books[highest_index].price) {
                highest_index = i;
            }
        }

        int lowest_index = 0;
        for (int i = 1; i < 3; i++) {
            if (books[i].price < books[lowest_index].price) {
                lowest_index = i;
            }
        }
    
        printf("The lowest-priced book is at index %d: \"%s\" by %s, Price: %d\n",
               lowest_index, books[lowest_index].title, books[lowest_index].author, books[lowest_index].price);
            
        printf("The most expensive book is at index %d: \"%s\" by %s, Price: %d\n",
                highest_index, books[highest_index].title, books[highest_index].author, books[highest_index].price);
        return 0;
    
}