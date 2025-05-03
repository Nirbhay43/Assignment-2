// PALINDROM CHECK
//  Write a C program that takes a number as input and checks 
//whether it is a palindrome using a function.
//Challenge: Modify the program to check if a given string is a palindrome. 

#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if(original == reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}

 
