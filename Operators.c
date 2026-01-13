/*#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    int sum = a + b;
    int product = a * b;

    // Logical Operator
    int bothPositive = (a > 0 && b > 0);

    // Conditional (Ternary) Operator
    int max = (a > b) ? a : b;

    // Output results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Both positive: %d\n", bothPositive);
    printf("Max value: %d\n", max);

    return 0;
}*/
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Sum and Product
    printf("Sum: %d\n", a + b);
    printf("Product: %d\n", a * b);

    // Check if both are positive
    printf("Both positive: %d\n", (a > 0 && b > 0));

    // Find the maximum value using if-else
    int max;
    if (a > b) {
        max = a;  // If a is greater than b, max gets the value of a
    } else {
        max = b;  // Otherwise, max gets the value of b
    }
    printf("Max value: %d\n", max);

    return 0;
}
