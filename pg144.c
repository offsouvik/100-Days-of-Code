#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void print_student(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter details for student (Name Roll Marks):\n");
    
    if (scanf("%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        
        print_student(s);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}