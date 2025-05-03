// Write a C program that calculates the factorial of a number using a function. 
//Include function declaration, definition, and call.

#include<stdio.h>
int fact(int f);
int main()
{
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Enter the positive number.");
	}
	else
	{
		int result = fact(n);
		printf("Factorial of %d is %d \n",n,result);
	}
	
	return 0;
}
int fact(int f)
{
	int fact = 1;
	int i;
	for(i=1; i<=f; i++)
	
	fact *=i;
	
		return fact;
}
	

	

