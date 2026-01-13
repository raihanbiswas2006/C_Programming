#include<stdio.h>

int main() {

    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Age is: %d\n", age);

    int c, d;
    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    int sum = c + d;
    printf("sum is: %d", sum);

    return 0;
}