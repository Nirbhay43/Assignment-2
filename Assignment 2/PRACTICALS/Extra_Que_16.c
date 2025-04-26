// WORD COUNT:
// Write a C program that counts the number of words in a sentence entered by the user.
//  Challenge: Modify the program to find the longest word in the sentence. 

#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0, words = 0;

    printf("Enter a sentence: ");
    gets(str); 
    
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > 0) {
                words++;
                if (j > max) {
                    max = j;
                    for (int k = 0; k <= j; k++)
                        longest[k] = word[k];
                }
                j = 0;
            }
        }
        i++;
    }

    
    word[j] = '\0';
    if (j > 0) {
        words++;
        if (j > max) {
            for (int k = 0; k <= j; k++)
                longest[k] = word[k];
        }
    }

    printf("Total words: %d\n", words);
    printf("Longest word: %s\n", longest);

    return 0;
}

