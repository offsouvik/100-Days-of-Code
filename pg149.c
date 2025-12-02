#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    s = (struct Student*)malloc(sizeof(struct Student));

    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Name:\n");
    if (scanf("%s", s->name) != 1) {
        fprintf(stderr, "Invalid input for name.\n");
        free(s);
        return 1;
    }

    printf("Enter Roll:\n");
    if (scanf("%d", &s->roll) != 1) {
        fprintf(stderr, "Invalid input for roll number.\n");
        free(s);
        return 1;
    }

    printf("Enter Marks:\n");
    if (scanf("%d", &s->marks) != 1) {
        fprintf(stderr, "Invalid input for marks.\n");
        free(s);
        return 1;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    free(s);

    return 0;
}