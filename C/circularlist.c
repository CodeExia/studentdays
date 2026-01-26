#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value;

    printf("Input the number of nodes : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Bro, input a number greater than 0.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Input data for node %d : ", i);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Make it circular: last node points to head
    temp->next = head;

    // Display the circular list
    printf("Data entered in the list are :\n");
    temp = head;
    for (int i = 1; i <= n; i++) {
        printf("Data %d = %d\n", i, temp->data);
        temp = temp->next;
    }

    return 0;
}
