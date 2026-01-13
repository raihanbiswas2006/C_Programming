#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(;;) {
        sum += i;
        printf("i = %d, sum = %d\n", i, sum);
        i++;
    }

    return 0;
}