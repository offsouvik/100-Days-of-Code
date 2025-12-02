#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status current_status;

    printf("Enter status (SUCCESS, FAILURE, TIMEOUT):\n");

    if (scanf("%s", input) == 1) {
        
        if (strcmp(input, "SUCCESS") == 0) {
            current_status = SUCCESS;
        } else if (strcmp(input, "FAILURE") == 0) {
            current_status = FAILURE;
        } else if (strcmp(input, "TIMEOUT") == 0) {
            current_status = TIMEOUT;
        } else {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }

        switch (current_status) {
            case SUCCESS:
                printf("Operation successful\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}