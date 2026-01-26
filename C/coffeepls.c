#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char val;
    struct Node *left; // Less
    struct Node *right; // Greater
} Node;

// Create a new node
Node* newNode(char letter) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = letter;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Traversals
void preorder(Node* root) {
    if (!root) return; // Vase case
    printf("%c ", root->val);
    preorder(root->left);
    preorder(root->right);
    // This is actually way simpler than expected, nice.
}

void inorder(Node* root) {
    if (!root) return; // Base case
    inorder(root->left);
    printf("%c ", root->val);
    inorder(root->right);
}

void postorder(Node* root) {
    if (!root) return; // Base case
    postorder(root->left);
    postorder(root->right);
    printf("%c ", root->val);
} // ONly difference is the order tbh lol

int main() {

    char inputs[][3] = {
        {'A','B','E'},
        {'B','C','N'},
        {'C','N','D'},
        {'E','F','H'},
        {'F','N','G'},
        {'H','I','J'}
    }; // N is for Null btw
    int n = 6;

    Node* nodes[128] = {NULL};   // 128 cuz the maximum of the ascii here is just 127
    int child[128] = {0};        // Remembrance for child nodes

    // Create nodes
    for (int i = 0; i < n; i++) {
        char root = inputs[i][0];
        char left = inputs[i][1];
        char right = inputs[i][2];

        if (!nodes[root]) nodes[root] = newNode(root);
        if (left != 'N') {
            nodes[left] = newNode(left);
            child[left] = 1;
        }
        if (right != 'N') {
            nodes[right] = newNode(right);
            child[right] = 1;
        }
    }

    // Link tree nodes
    for (int i = 0; i < n; i++) {
        char root = inputs[i][0];
        char left = inputs[i][1];
        char right = inputs[i][2];

        if (left != 'N') nodes[root]->left = nodes[left];
        if (right != 'N') nodes[root]->right = nodes[right];
    }


    // Find root 
    Node* root = NULL;
    for (int i = 0; i < 128; i++) {
        if (nodes[i] && child[i] == 0) {
            root = nodes[i];
            break;
            // This is a bruteforce appraoch but whatever
        }
    }
    // Output the trees
    printf("Node  L-Subtree  R-Subtree\n");
    for (int i = 0; i < n; i++) {
        char L = inputs[i][1] == 'N' ? '-' : inputs[i][1];
        char R = inputs[i][2] == 'N' ? '-' : inputs[i][2];
        printf("%c     %c          %c\n", inputs[i][0], L, R);
    }

    printf("\nRoot of the Tree: %c\n", root->val);

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
