// Write a C program that takes two strings from the user and concatenates them using strcat().
// Display the concatenated string and its length using strlen().

#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100]; 
	char name2[100];
	
	printf("Enter the name1[] :\n");
	scanf("%s",name1);
	
	printf("Enter the name2[]:\n");
	scanf("%s",name2);
	
	strcat(name1,name2);
	
	printf("Concatenated string: %s\n", name1);
    printf("Length of concatenated string: %lu\n", strlen(name1));
}
