#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    printf("Enter Gender (MALE, FEMALE, OTHER):\n");

    if (scanf("%s", input) == 1) {
        
        if (strcmp(input, "MALE") == 0) {
            p.gender = MALE;
            printf("Male\n");
        } else if (strcmp(input, "FEMALE") == 0) {
            p.gender = FEMALE;
            printf("Female\n");
        } else if (strcmp(input, "OTHER") == 0) {
            p.gender = OTHER;
            printf("Other\n");
        } else {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}