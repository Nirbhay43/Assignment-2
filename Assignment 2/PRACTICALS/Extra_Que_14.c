// STRING REVERSAL:
//Write a C program that takes a string as input and reverses it using a function.
//Challenge: Write the program without using built-in string handling functions. 

#include <stdio.h>

int getLength(char str[]) {
    int len = 0;
    while(str[len] != '\0')
        len++;
    return len;
}

void reverseString(char str[]) {
    int i, len, temp;
    len = getLength(str);

    for(i = 0; i < len / 2; i++) {
      
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

