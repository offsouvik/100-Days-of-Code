#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    int file_has_content = 0;

    printf("Enter the filename:\n");
    if (scanf("%s", filename) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    lines = 1;

    while ((ch = fgetc(fptr)) != EOF) {
        file_has_content = 1;
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (in_word == 0) {
                in_word = 1;
                words++;
            }
        }
    }

    if (file_has_content == 0) {
        lines = 0;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fptr);

    return 0;
}