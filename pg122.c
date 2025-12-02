#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("info.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file. Make sure info.txt exists.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);

    return 0;
}