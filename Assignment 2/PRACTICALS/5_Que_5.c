// Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while). 
//
#include<stdio.h>
main()
{
	int num=1;
	
	printf("\n\n\tusing while loop:");
	
	
	while(num<=10)
	{
		printf("\n\n\t%d",num);
		
		num++;
	}
	
	printf("\n\n\tusing for loop:");
	
	for(num=1 ; num<=10; num++)
	{
		printf("\n\n\t%d",num);
	}
	
	printf("\n\n\tusing do-while loop:");
	
	
	num=1;
	do
	{
		printf("\n\n\t%d",num);
		num++;
	}
	while(num<=10);
	
	
}
