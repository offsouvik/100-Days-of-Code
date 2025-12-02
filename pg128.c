#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int vowels = 0;
    int consonants = 0;

    printf("Enter the filename:\n");
    if (scanf("%s", filename) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fptr);

    return 0;
}