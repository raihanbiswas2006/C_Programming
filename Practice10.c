#include<stdio.h>

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (num % 7 == 0 && num % 12 == 0) {
        printf("%d is divisible by both 7 and 12.\n", num);
    } else if (num % 7 == 0) {
        printf("%d is divisible by 7 but not by 12.\n", num);
    } else if (num % 12 == 0) {
        printf("%d is divisible by 12 but not by 7.\n", num);
    } else {
        printf("%d is not divisible by either 7 or 12.\n", num);
    }

    return 0;
}