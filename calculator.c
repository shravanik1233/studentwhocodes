#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main(void) {
    int choice;
    double num1, num2, result;

    printf("=================================\n");
    printf("       SIMPLE CALCULATOR\n");
    printf("=================================\n");

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (choice == 5) {
            printf("Thank you for using the calculator!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please select 1 to 5.\n");
            continue;
        }

        printf("Enter the first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid number.\n");
            return 1;
        }

        printf("Enter the second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid number.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2lf\n", result);
                }
                break;
        }
    }

    return 0;
}
