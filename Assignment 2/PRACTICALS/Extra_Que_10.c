// SUM OF ARRAY ELEMENT:
// Write a C program that takes N numbers from the user and stores them in an array.
//  The program should then calculate and display the sum of all array elements.
//  Challenge: Modify the program to also find the average of the numbers. 

#include <stdio.h>

int main() {
    int N, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

  
    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / N;

    printf("Sum of the numbers = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

