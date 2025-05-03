//Write a C program to create a file, 
//write a string into it, close the file, then open the file again to read and display its contents

#include <stdio.h>

int main() {
    FILE *file;

     // Write to the file
    file = fopen("myfile.txt", "w");
    fprintf(file, "Hello, file!\n");
    fclose(file);

    // Read from the file
    file = fopen("myfile.txt", "r");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}

