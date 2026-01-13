#include<stdio.h>

int main(){

    int i, start, end, sum = 0;

    printf("Enter Start Number: ");
    scanf("%d", &start);

    printf("Enter End Number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum += i;
    }

    printf("Sum: %d \n", sum);

    return 0;
}