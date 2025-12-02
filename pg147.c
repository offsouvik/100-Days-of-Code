#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fptr;
    struct Employee emp_write;
    struct Employee emp_read;

    fptr = fopen("employee.dat", "wb");

    if (fptr == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    printf("Enter Employee Name:\n");
    scanf("%s", emp_write.name);

    printf("Enter Employee ID:\n");
    scanf("%d", &emp_write.id);

    printf("Enter Employee Salary:\n");
    scanf("%f", &emp_write.salary);

    fwrite(&emp_write, sizeof(struct Employee), 1, fptr);
    
    printf("Employee details stored successfully in employee.dat\n");

    fclose(fptr);

    fptr = fopen("employee.dat", "rb");

    if (fptr == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fptr);

    printf("\nData read from file:\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);

    fclose(fptr);

    return 0;
}