#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100];
    char destPath[100];
    char ch;

    printf("Enter source file name:\n");
    if (scanf("%s", sourcePath) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    printf("Enter destination file name:\n");
    if (scanf("%s", destPath) != 1) {
        fprintf(stderr, "Invalid input.\n");
        fclose(sourceFile);
        return 1;
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully to %s\n", destPath);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}