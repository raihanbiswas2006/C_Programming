#include<stdio.h>
int main(){

    long long num;
    int count = 0;
    printf("Enter any Multiple Number's: ");
    scanf("%lld", &num);

    while (num != 0)
    {
        num = num / 10; /* code */
        count++;
    }
    printf("Total Digits: %d \n", count);

    return 0;
}