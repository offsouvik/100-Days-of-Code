#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;

    printf("Enter the filename:\n");
    if (scanf("%s", filename) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}