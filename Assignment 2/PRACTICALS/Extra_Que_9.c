// Write a C program that accepts two 2x2 matrices from the user and adds them. 
// Display the resultant matrix. 
//  Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], sum[3][3], product[3][3];
    int i, j, k;

    // 2 x 2 matrices:
    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);


    printf("\nSum of 2x2 matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    //  3x3 matrices:
    printf("\nEnter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

   
    printf("\nSum of 3x3 matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

  
    printf("\nProduct of 3x3 matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
            for(k = 0; k < 3; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

