#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter Name:\n");
    if (scanf("%s", s.name) != 1) {
        fprintf(stderr, "Invalid input for name.\n");
        return 1;
    }

    printf("Enter Roll:\n");
    if (scanf("%d", &s.roll_no) != 1) {
        fprintf(stderr, "Invalid input for roll number.\n");
        return 1;
    }

    printf("Enter Marks:\n");
    if (scanf("%d", &s.marks) != 1) {
        fprintf(stderr, "Invalid input for marks.\n");
        return 1;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}