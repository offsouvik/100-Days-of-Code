#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name:\n");
    if (scanf("%s", emp.name) != 1) {
        fprintf(stderr, "Invalid input for name.\n");
        return 1;
    }

    printf("Enter Employee ID:\n");
    if (scanf("%d", &emp.id) != 1) {
        fprintf(stderr, "Invalid input for ID.\n");
        return 1;
    }

    printf("Enter Joining Date (dd mm yyyy):\n");
    if (scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year) != 3) {
        fprintf(stderr, "Invalid input for date.\n");
        return 1;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", 
           emp.name, emp.id, emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}