#include <stdio.h>

int main() {
    FILE *fptr;
    char name[100];
    int roll;
    int marks;
    int n, i;

    fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter the number of students:\n");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        fclose(fptr);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter Name, Roll Number, and Marks for student %d:\n", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fptr, "%s %d %d\n", name, roll, marks);
    }

    fclose(fptr);

    fptr = fopen("students.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");

    while (fscanf(fptr, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fptr);

    return 0;
}