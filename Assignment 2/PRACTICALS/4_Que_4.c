//Write a C program to check if a number is even or odd using an if-else statement.
// Extend the program using a switch statement to display the month name based on the user’s input
// (1 for January, 2 for February, etc.)

#include<stdio.h>
main()
{
	int num;
	printf("\n\n\tEnter number:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n\n\t%d is even number.",num);	
	}
	else
	{
		printf("\n\n\t%d is odd number.",num);
	}
	
	int month;
	
	printf("\n\n\tEnter any number (1-12):");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("\n\n\tJanuary.");
		break;
		case 2 : printf("\n\n\tFabruary.");
		break;
		case 3 : printf("\n\n\tMarch.");
		break;
		case 4 : printf("\n\n\tApril.");
		break;
		case 5 : printf("\n\n\tMay.");
		break;
		case 6 : printf("\n\n\tJune.");
		break;
		case 7 : printf("\n\n\tJuly.");
		break;
		case 8 : printf("\n\n\tAugust.");
		break;
		case 9 : printf("\n\n\tSeptember.");
		break;
		case 10: printf("\n\n\tOctober.");
		break;
		case 11: printf("\n\n\tNovember.");
		break;
		case 12: printf("\n\n\tDecember.");
		break;
		default: printf("\n\n\tInvalid number,please enter valid number!");
		break;
		
	}
}
