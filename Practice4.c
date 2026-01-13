#include <stdio.h>
int main() {

    int number;
    printf("Give Number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Then Number is Negative");
    }
    else
    {
        printf("Then Number is Positive");
    }

    return 0;
}