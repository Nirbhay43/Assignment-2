// PASCAL'S TRIANGLE:
// Write a C program that generates Pascal’s Triangle up to N rows using loops.
//Challenge: Implement the same program using a recursive function. 

#include <stdio.h>

// Factorial function
int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Binomial coefficient nCr
int binomial(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Loop-based Pascal’s Triangle
void pascalLoop(int N) {
    printf("\nPascal's Triangle using loops:\n");
    for(int i = 0; i < N; i++) {
        for(int space = 0; space < N - i - 1; space++)
            printf("  ");
        for(int j = 0; j <= i; j++)
            printf("%4d", binomial(i, j));
        printf("\n");
    }
}

// Recursive Pascal’s Triangle
void pascalRecursive(int row, int N) {
    if(row == N) return;

    for(int space = 0; space < N - row - 1; space++)
        printf("  ");
    for(int i = 0; i <= row; i++)
        printf("%4d", binomial(row, i));
    printf("\n");

    pascalRecursive(row + 1, N);
}

int main() {
    int N;

    printf("Enter number of rows: ");
    scanf("%d", &N);

    // Using loops
    pascalLoop(N);

    // Using recursion
    printf("\nPascal's Triangle using recursion:\n");
    pascalRecursive(0, N);

    return 0;
}

