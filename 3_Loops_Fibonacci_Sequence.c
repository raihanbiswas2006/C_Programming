#include<stdio.h>
int main(){
    int n, i, first = 0, second = 1, next;
    printf("Enter the number of Fibonacci Terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence of %d Terms: \n", n);
    for (i = 0; i < n ; i++){
        if (i <= 1){
            next = i;
        }
        else{
            next = first = second;
            first = second;
            second = next;
        }
        printf("%d", next);
    }
    printf("\n.\n.\n.");
    return 0;
}