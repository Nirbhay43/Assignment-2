//Write a C program that acts as a simple calculator. 
//The program should take two numbers and an operator as input from the user 
//and perform the respective operation (addition, subtraction, multiplication, division, or modulus) using operators. 
//Challenge: Extend the program to handle invalid operator inputs. 

#include<stdio.h>
int main()
{
	int a,b;
	char choice;
	
	printf("\nSIMPLE CALCULATOR:\n");
	printf("Enter the number for calculate the number:\n");
	scanf("%d %d",&a, &b);
	
	printf("\n\n_______________OPERATORS:________________\n");
	printf("\n\n\n press + for addition");
	printf("\n\n\n press - for subtraction");
	printf("\n\n\n press * for multiplication");
	printf("\n\n\n press / for division");
	printf("\n\n\n press %% for modulus");
	printf("\n\n_________________________________________\n");
	
	printf("\nEnter your choice for above operators:\n");
	scanf(" %c", &choice);
	
	if(choice=='+')
	{
		printf("\n\n addition = %d",a+b);
	}
	else if(choice=='-')
	{
		printf("\n\n subtraction = %d",a-b);
	}
	else if(choice=='*')
	{
		printf("\n\n multiplication = %d",a*b);
	}
	else if(choice=='/')
	{
		printf("\n\n division = %d",a/b);
	}
	else if(choice=='%')
	{
		printf("\n\n modulus = %d",a%b);
	}
	else
	{
		printf("\n invalid choice, please enter valid choice:");
	}
}


