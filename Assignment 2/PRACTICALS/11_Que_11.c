// Write a C program that defines a structure to store a student's details (name, roll number, and marks).
//  Use an array of structures to store details of 3 students and print them.

#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll_number;
	float marks;
};
int main()
{
	struct student Student[3];
//	strcpy(s1.name, "AYUSHI");
//	s1.roll_number = 01;
//	s1.marks = 99;
//	
//	printf("Student Data:\n");
//	printf("Student name is :%s\n", Student.name);
//	printf("Student Roll Number is :%d\n", Student.roll_number);
//	printf("Student Marks is :%f\n", Student.marks);
	int i;
	
	for(i=0; i<3; i++)
	{
	
		printf("\nEnter the student details:%d\n", i+1);
			
		printf("\nname:");
		scanf("%s", &Student[i].name);
		
		printf("\nRoll Number:");
		scanf("%d", &Student[i].roll_number);
		
		printf("\nMarks:");
		scanf("%f", &Student[i].marks);		
	}
		printf("\n");
	
	printf("Student Details:\n");
	for(i=0; i<3; i++)
	{
		printf("\n\nStudent %d:\n", i + 1);
        printf("Name: %s\n", Student[i].name);
        printf("Roll Number: %d\n", Student[i].roll_number);
        printf("Marks: %f\n", Student[i].marks);
	}

	return 0;	
}

