//FUNCTIONS:
//FEBONACCI SERIES:
//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
// Challenge: Modify the program to calculate the Nth Fibonacci number using both 
// iterative and recursive methods.
// Compare their efficiency.

#include <stdio.h>

// Recursive function
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci sequence (recursive):\n");
    for(i = 0; i < N; i++) {
        printf("%d ", fibonacci(i));
    }


    printf("\n\n%dth Fibonacci number (recursive): %d", N, fibonacci(N));

   
    a = 0;
    b = 1;
    for(i = 2; i <= N; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    if (N == 0)
        b = 0;
    else if (N == 1)
        b = 1;

    printf("\n%dth Fibonacci number (iterative): %d\n", N, b);

    return 0;
}
 
