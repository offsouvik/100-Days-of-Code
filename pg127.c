#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("input.txt", "r");

    if (sourceFile == NULL) {
        printf("Error: Could not open input.txt.\n");
        return 1;
    }

    destFile = fopen("output.txt", "w");

    if (destFile == NULL) {
        printf("Error: Could not create output.txt.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        ch = toupper(ch);
        fputc(ch, destFile);
    }

    printf("File converted and saved to output.txt successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}