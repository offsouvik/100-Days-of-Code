#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details for 5 students (Name Roll Marks):\n");

    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        if (scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    printf("\nStudent List:\n");
    printf("Name\tRoll\tMarks\n");
    
    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}