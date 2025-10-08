#include <stdio.h>

// Recursive function to print Fibonacci sequence up to nth term
void printFibonacci(int n, int a, int b) {
    if (n <= 0) {
        return;  // Base case, when n becomes 0, the function stops
    }
    
    // Print the current Fibonacci number (a)
    printf("%d ", a);
    
    // Recursive call to print the next Fibonacci number
    printFibonacci(n - 1, b, a + b);  // The next Fibonacci number is b + a
}

int main() {
    int n;
    
    // Ask the user for the number of Fibonacci terms to print
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);
    
    // Handle edge case when n is less than or equal to 0
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci sequence up to %d terms: \n", n);
        printFibonacci(n, 0, 1);  // Start the sequence with 0 and 1
    }

    return 0;
}
