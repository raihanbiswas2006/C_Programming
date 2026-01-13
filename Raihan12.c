#include<stdio.h>
int main(){

    //13en Area of a Triangle in C
    float b, h, A;
    printf("Enter the Base: ");
    scanf("%f", &b);

    printf("Enter the Hight: ");
    scanf("%f", &h);

    A = .5 * b * h;

    printf("Area of the Triangle is: %f\n", A);

    return 0;
}