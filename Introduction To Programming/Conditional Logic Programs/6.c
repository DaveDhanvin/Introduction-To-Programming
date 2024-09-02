//find the Character Is Vowel or Not
#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    int isVowel = 0; 

    printf("Enter a character: ");
    scanf(" %c", &ch); 

  
    ch = toupper(ch);

    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        isVowel = 1;
            break;
    }

    
    if (isVowel) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
           
