#include <stdio.h>
int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Then Number Is Negative");
    }
    if (number > 0)
    {
        printf("Then Number Is Positive");
    }
    if (number == 0)
    {
        printf("Then Number Is Zero");
    }
    

    return 0;
}