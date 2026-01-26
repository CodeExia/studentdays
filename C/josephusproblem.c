// Im gonna use linked list

#include "stdio.h"
#include <stdlib.h>

typedef struct Node {
    int number;
    struct Node *next;
} Node;

// Making new nods
Node* newNode(int number) {
    Node *anotherNode = (Node*)malloc(sizeof(Node));
    anotherNode->number = number;
    anotherNode->next = NULL;
    return anotherNode;
}

int josephusProblem(int N, int M){
    Node *head = newNode(1);
    Node *tail = head;

    // Start from two cuz we already have 1 person
    for (int i = 2; i <= N; i++)
    {
        tail->next = newNode(i);
        tail = tail->next; // Move to next node to create
    }

    tail->next = head; // Connect the tail to the head
    Node *current = head;
    Node *temp;

    while (current->next != current){
        // Since we elminate nodes, when the current points to itself it is the only node left
        for (int i = 0; i < M; i++)
        {
            tail = current;
            current = current->next;
        }
        // Finally onto deleting
        tail ->next = current->next;
        temp = current;
        current = current->next;
        free(temp); // This is the disposal of cells
    }


    int winner = current->number;
    free(current);
    return winner;
}

int main()
{
    int N, M;

    printf("Please enter how many players:");
    scanf("%d", &N);
    printf("Please enter how many passes:");
    scanf("%d", &M);

    printf("Winnder: %d", josephusProblem(N, M));
    return 0;
}