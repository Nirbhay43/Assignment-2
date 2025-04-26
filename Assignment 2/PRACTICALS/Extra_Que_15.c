// COUNT VOWELS AND CONSONANTS:
//Write a C program that takes a string from the user and counts the number of vowels
// and consonants in the string.
// Challenge: Extend the program to also count digits and special characters. 
 
 #include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    gets(str);  

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'||
               ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
                vowels++;
            else
                consonants++;
        }
        else if(ch >= '0' && ch <= '9')
            digits++;
        else
            specials++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}

