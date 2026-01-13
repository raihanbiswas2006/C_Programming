#include<stdio.h>
int main(){
    int num, factorial = 1;
    do{
        printf("Enter a Positive Integer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Invalid Input.\n"); }
        else{
            int i;
            for (i = 1; i <= num; i++){
                factorial *= i; }
            printf("Factorial of %d is: %d \n", num, factorial);}
    }
    while (num < 0);{
        /* code */
    }
    return 0;
}