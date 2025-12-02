// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    float num1, num2, result;
    char op;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to consume any leftover newline
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation using switch-case
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero not allowed!\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;
        case '%':
            // Modulus works only with integers
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero not allowed!\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
