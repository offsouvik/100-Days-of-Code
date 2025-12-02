#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;

    fptr = fopen("info.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("Enter your age:\n");
    scanf("%d", &age);

    fprintf(fptr, "Name: %s, Age: %d\n", name, age);

    fclose(fptr);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}