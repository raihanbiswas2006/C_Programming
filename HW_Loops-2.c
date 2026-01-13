#include<stdio.h>

int main(){

    int i, n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        sum += i; /* code */
    }

    printf("Sum Even Number: %d \n", sum);

    return 0;
}