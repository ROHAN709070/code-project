#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Operations
    printf("\nAddition = %.2f\n", num1 + num2);
    printf("Subtraction = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);

    // Division (check for zero)
    if(num2 != 0) {
        printf("Division = %.2f\n", num1 / num2);
    } else {
        printf("Division not possible (cannot divide by zero)\n");
    }

    return 0;
}