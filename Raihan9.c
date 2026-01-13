#include<stdio.h>
int main(){

    //10th Addition of Two numbers
    int a,b,c,d;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    d = a - b;

    printf("Summation of a and b is :%d\n", c);
    printf("Subtraction of a and b is:%d\n", d);
    
    return 0;
}