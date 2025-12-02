#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char text[1000];

    printf("Enter the filename:\n");
    if (scanf("%s", filename) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    getchar();

    fptr = fopen(filename, "a");

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter text to append:\n");
    
    if (fgets(text, sizeof(text), stdin) != NULL) {
        fprintf(fptr, "%s", text);
        printf("File updated successfully with appended text.\n");
    } else {
        printf("Error reading input.\n");
    }

    fclose(fptr);

    return 0;
}