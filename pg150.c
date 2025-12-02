#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Name:\n");
    if (scanf("%s", ptr->name) != 1) {
        fprintf(stderr, "Invalid input for name.\n");
        return 1;
    }

    printf("Enter Roll:\n");
    if (scanf("%d", &ptr->roll) != 1) {
        fprintf(stderr, "Invalid input for roll number.\n");
        return 1;
    }

    printf("Enter Marks:\n");
    if (scanf("%d", &ptr->marks) != 1) {
        fprintf(stderr, "Invalid input for marks.\n");
        return 1;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}