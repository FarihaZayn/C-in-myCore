#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("=== Simple Calculator ===\n");
    printf("Enter: number operator number (e.g., 5 + 3)\n");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
