// Write a C program that stores 5 integers in a one-dimensional array and prints them.
//  Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements. 

#include<stdio.h>
int main()
{
	// Write a C program that stores 5 integers in a one-dimensional array and prints them.
	int i , j;
	int arr[5];
	
	printf("Enter the 5 integer for a One-dimentional:\n");
	
	for(i=0; i<5; i++)
	{
		printf("Enter number %d:\n", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<5; i++)
	{
		printf(" number %d: %d\n ",i+1,arr[i]);
	}
	
//	 Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements. 

	int sum = 0;
	int matrix[3][3];
	
	printf("Enter the value of 3x3 Matrix:\n");
		
	for(i= 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("element [%d][%d] =",i, j);
			scanf("%d",&matrix[i][j]);
			sum += matrix[i][j];
			
		}
	}
	printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of the matrix = %d\n", sum);

	
}
