//// Write a C program that takes an integer input from the user and 
//prints its multiplication table using a for loop.
// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include<stdio.h>
int main()
{
	int n, i;
// multiplication table :
	printf("Enter the integer from 1 to N:");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n", n, i, n*i);
	}
	
//Allow the user to input the range of the multiplication table (e.g., from 1 to N).

	int start, end;

	printf("Enter the stating value of the range:\n");
	scanf("%d", &start);
	
	printf("Enter the ending value of the range:\n");
	scanf("%d", &end);
	
	printf("Multiplication table of %d from %d to %d\n", n, start, end);
	
	
	for(i=start; i<=end; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i );
	}
	return 0;
} 
