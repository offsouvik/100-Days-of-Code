//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower(ch); // Convert to lowercase

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is a vowel\n", ch);
        else
            printf("%c is a consonant\n", ch);
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
