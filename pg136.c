#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char command[20];
    int num1, num2;
    long long result;
    enum Operation op;
    int valid_op = 1;

    printf("Enter operation and two numbers (e.g., ADD 10 20):\n");

    if (scanf("%s %d %d", command, &num1, &num2) == 3) {
        
        if (strcmp(command, "ADD") == 0) {
            op = ADD;
        } else if (strcmp(command, "SUBTRACT") == 0) {
            op = SUBTRACT;
        } else if (strcmp(command, "MULTIPLY") == 0) {
            op = MULTIPLY;
        } else {
            valid_op = 0;
        }

        if (valid_op) {
            switch (op) {
                case ADD:
                    result = (long long)num1 + num2;
                    break;
                case SUBTRACT:
                    result = (long long)num1 - num2;
                    break;
                case MULTIPLY:
                    result = (long long)num1 * num2;
                    break;
            }
            printf("%lld\n", result);
        } else {
            fprintf(stderr, "Invalid operation.\n");
            return 1;
        }

    } else {
        fprintf(stderr, "Invalid input format.\n");
        return 1;
    }

    return 0;
}