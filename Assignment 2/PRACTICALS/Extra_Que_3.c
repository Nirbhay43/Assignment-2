// GRADE CALCULATOR
//Write a C program that takes the marks of a student as input and displays the corresponding 
//grade based on the following conditions:
// Marks > 90: Grade A 
// Marks > 75 and <= 90: Grade B 
// Marks > 50 and <= 75: Grade C 
// Marks <= 50: Grade D 
//Use if-else or switch statements for the decision-making process.

#include<stdio.h>
int main()
{
	float maths;
	float chem;
	float phy;
	float marks;
	
	printf("______GRADE CALCULATOR:______\n");
	printf("------Enter the marks of the student:----\n");
	
	printf("Enter Math Marks:\n");
	scanf("%f", &maths);
	
	printf("Enter Chem Marks:\n");
	scanf("%f", &chem);
	
	printf("Enter Phy Marks:\n");
	scanf("%f", &phy);
	
	marks = (maths + chem + phy)/3;
	
	printf("Marks = %.2f\n",marks);
	
// using else if statement :

	if(marks > 90)
	{
		printf("Grade A.\n");
	}
	else if(marks > 75 && marks <= 90)
	{
		printf("Grade B.\n");
	}
	else if(marks > 50 && marks <=75)
	{
		printf("Grade C.\n");
	}
	else
	{
		printf("Grade D.\n");
	}
	
// using switch case

	int grade;
	grade = marks / 10;
	switch(grade)
	{
		case 10 ://100
		case 9 ://99-90
			
			printf("Grade A\n");
			break;
			
		case 8 ://80-89
		case 7 ://70-79
			printf("Grade B.\n");
			break;
			
		case 6 ://60-59
		case 5 ://50-49
			printf("Grade C.\n");
			break;
			
		default ://0-49
			printf("Grade D.\n");
			break;
			
	}	
} 
