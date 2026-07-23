/*
Write a program to calculate the perimeter of a rectangle. Take sides a & b from the user.
*/
#include<stdio.h>
int main(){

    float a, b, perimeter;

    printf("Give Length Size: ");
    scanf("%f", &a);
    printf("Give Width Size:");
    scanf("%f", &b);

    perimeter = 2 * (a+b);

    printf("Perimeter of Rectangle: %.2f\n", perimeter);

    return 0;
}