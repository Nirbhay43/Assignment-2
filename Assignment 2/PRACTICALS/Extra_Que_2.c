//Write a C program that takes an integer from the user and checks the following using different operators: 
// Whether the number is even or odd.
// Whether the number is positive, negative, or zero. 
// Whether the number is a multiple of both 3 and 5.

#include<stdio.h>
int main()
{
	int x;
	
	printf("Enter the number :");
	scanf("%d", &x);
	
//	Whether the number is even or odd.
	
	if(x % 2 == 0)
	{
		printf("%d is even.\n", x);
	}
	else 	
	{
		printf("%d is odd.\n", x);
	}

// Whether the number is positive, negative, or zero.

	if(x > 0)
	{
		printf("%d is Positive.\n", x);
	}
	else if(x < 0)
	{
		printf("%d is Negative.\n", x);
	}
	else
	{
	
		printf("%d is Zero.\n", x);
	}
	
// Whether the number is a multiple of both 3 and 5.

	if(x % 3 == 0 && x % 5 == 0)
	{
		printf("%d is a Multiple of both 3 and 5.\n", x);
	}
	else
	{
		printf("%d is Not multiple of both 3 and 5.\n", x);
	}
	
 } 
