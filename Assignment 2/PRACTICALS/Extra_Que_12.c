//FACTORIAL CALCULATION:
//Write a C program that calculates the factorial of a given number using a function. 
// Challenge: Implement both an iterative and a recursive version of the factorial function
//  and compare their performance for large numbers. 

#include <stdio.h>

// Recursive function
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Iterative function
int factorial_iterative(int n) {
	int i;
    int fact = 1;
    for( i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial using recursion: %d\n", factorial_recursive(n));
    printf("Factorial using iteration: %d\n", factorial_iterative(n));

    return 0;
}

