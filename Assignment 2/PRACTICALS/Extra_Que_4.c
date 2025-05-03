// NUMBER COMPARISION:
//Write a C program that takes three numbers from the user and determines:
//The largest number.
//The smallest number. 
//Challenge: Solve the problem using both if-else and switch-case statements.

#include<stdio.h>
int main()
{
	int num1, num2, num3;
	int largest=0, smallest=0;
	
	printf("Enter The Three Number:\n");
	scanf("%d %d %d",&num1, &num2, &num3);
	
// Using if-else statements:

	//Largest Number:

	if(num1 > num2 && num1 > num3)
	{
		printf("%d is Largest Number.\n", num1);
		largest = 1;		
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("%d is Largest Number.\n", num2);
		largest = 2;
	}
	else if (num3 > num1 && num3 > num2)
	{
		printf("%d is Largest Number.\n", num3);
		largest = 3;
	}
	else 
	{
		printf("Number are equal.\n");
	}
	
	//smallest number:
	
	if(num1 < num2 && num1 < num3)
	{
		printf("%d is Smallest Number.\n", num1);
		smallest = 1;		
	}
	else if(num2 < num1 && num2 < num3)
	{
		printf("%d is Smallest Number.\n", num2);
		smallest = 2;
	}
	else if (num3 < num1 && num3 < num2)
	{
		printf("%d is Smallest Number.\n", num3);
		smallest = 3;
	}
	else 
	{
		printf("Number are equal.\n");
	}
	
	
// Using Switch Case:

	
	
	switch(largest)
	{
		case 1 : 
			printf("%d is largest Number.\n", num1);
			break;
			
		case 2 :
			printf("%d is largest Number.\n", num2);
			break;
			
		case 3 :
			printf("%d is largest Number.\n", num3);
			break;
		
		default :
			printf("All are equal.");
	}
	
	switch(smallest)
	{
		case 1 : 
			printf("%d is Smallest Number.\n", num1);
			break;
			
		case 2 :
			printf("%d is Smallest Number.\n", num2);
			break;
			
		case 3 :
			printf("%d is Smallest Number.\n", num3);
			break;
			
		default :
			printf("All are equal.");
			break;
	}

	
} 
