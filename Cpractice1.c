#include<stdio.h>
//area of square
int main() {
    //it can int or float
    int side;
    printf("Enter side: ");
    scanf("%d", &side);

    printf("Area is: %d", side * side);

    return 0;
}