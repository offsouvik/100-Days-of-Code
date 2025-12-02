#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

struct Student get_top_student(struct Student s[], int n) {
    int i;
    int max_index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }
    return s[max_index];
}

int main() {
    int n, i;
    struct Student top_student;

    printf("Enter the number of students:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. Please enter a positive number.\n");
        return 1;
    }

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks):\n", i + 1);
        if (scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    top_student = get_top_student(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top_student.name, top_student.roll, top_student.marks);

    return 0;
}
