#include <stdio.h>
int main() {

    int num1, sum1 = 0, digit1;

    printf("Enter a Number: ");
    scanf("%d", &num1);

    while(num1 != 0) {
        digit1 = num1 % 10;
        sum1 += digit1;
        num1 /= 10;
    }

    printf("Sum of digits = %d\n", sum1);

    return 0;
}