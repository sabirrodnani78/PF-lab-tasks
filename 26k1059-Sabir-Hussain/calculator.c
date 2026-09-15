#include <stdio.h>
#include <math.h>
int main() {
    int mode;
    char op;
    double num1, num2, result;

    printf("Select mode:\n");
    printf("1. Basic Arithmetic\n");
    printf("2. Power/Root Operations\n");
    scanf("%d", &mode);

    switch (mode) {
        case 1:
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (op) {
        case '+':
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        break;
        case '-':
        result = num1 - num2;
        printf("Result: %.2f\n", result);
         break;
        case '*':
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        break;
        case '/':
        if (num2 == 0) {
         printf("Error: Division by zero.\n");
        } else {
         result = num1 / num2;
        printf("Result: %.2f\n", result);
        }
        break;
        default:
        printf("Invalid operator.\n");
        }
        break;

        case 2:
        printf("Enter 's' for square or 'r' for square root: ");
        scanf(" %c", &op);

        printf("Enter a number: ");
        scanf("%lf", &num1);

        switch (op) {
        case 's':
        result = pow(num1, 2);
        printf("Result: %.2f\n", result);
        break;
        case 'r':
        if (num1 < 0) {
        printf("Error: Cannot take square root of a negative number.\n");
        } else {
        result = sqrt(num1);
        printf("Result: %.2f\n", result);
        }
        break;
        default:
        printf("Invalid choice.\n");
        }
        break;
        default:
            printf("Invalid mode.\n");
    }

    return 0;
}
