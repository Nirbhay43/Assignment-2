// ARMSTRONG NUMBER:
//Write a C program that checks whether a given number is an Armstrong number or not
// (e.g., 153 = 1^3 + 5^3 + 3^3).
//Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 

#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int original = num, sum = 0, digit, n = 0;

    int temp = num;
    while (temp > 0) {
        n++;
        temp /= 10;
    }

    
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int i, num;

    // Check a single number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    //  All Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for ( i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}

