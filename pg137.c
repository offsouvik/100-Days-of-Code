#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role current_role;
    int valid_role = 0;

    printf("Enter user role (ADMIN, USER, GUEST):\n");

    if (scanf("%s", input) == 1) {
        
        if (strcmp(input, "ADMIN") == 0) {
            current_role = ADMIN;
            valid_role = 1;
        } else if (strcmp(input, "USER") == 0) {
            current_role = USER;
            valid_role = 1;
        } else if (strcmp(input, "GUEST") == 0) {
            current_role = GUEST;
            valid_role = 1;
        }

        if (valid_role) {
            switch (current_role) {
                case ADMIN:
                    printf("Welcome Admin!\n");
                    break;
                case USER:
                    printf("Welcome User!\n");
                    break;
                case GUEST:
                    printf("Welcome Guest!\n");
                    break;
            }
        } else {
            fprintf(stderr, "Invalid role.\n");
            return 1;
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}