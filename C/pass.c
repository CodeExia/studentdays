#include <stdio.h>

int main() {
    char username[80];
    char password[80];
    char user[80] = "carl";
    char pass[80] = "larc";

    printf("enter your username: ");
    scanf("%s", username);
    printf("enter your pass: ");
    scanf("%s", password);

    if (username == user && password == pass) {
        printf("Yes.");
    }
    else {
        printf("No.");
    }
    return 0;
}