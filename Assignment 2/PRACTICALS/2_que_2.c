//Write a C program that includes variables, constants, and comments.
// Declare and use different data types (int, char, float) and display their values. 
 
#include<stdio.h>
main()
{
	int age;
	char grade;
	float height;
	const float pi = 3.14;
	
	printf("\n\n\tEnter Your Age:");
	scanf("%d",&age);
	
	printf("\n\n\tEnter Your Grade:");
	scanf(" %c",&grade);
	
	printf("\n\n\tEnter Height:");
	scanf("%f",&height);
	
	printf("\n\n\tYour Age is %d",age);
	printf("\n\n\tYour Grade is %c",grade);
	printf("\n\n\tHeight is %f",height);
	printf("\n\n\tPI value is : %.3f ",pi);
	
}
