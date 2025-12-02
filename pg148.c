#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details for Student 1 (Name Roll Marks):\n");
    if (scanf("%s %d %d", s1.name, &s1.roll, &s1.marks) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    printf("Enter details for Student 2 (Name Roll Marks):\n");
    if (scanf("%s %d %d", s2.name, &s2.roll, &s2.marks) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}