/*
Write comments for programs (a) & (b).
*/
#include<stdio.h>
int main(){

    /*A*/

    float a, b, perimeter;   // Declare variables

    // Take length from user
    printf("Give Length Size: ");
    scanf("%f", &a);

    // Take width from user
    printf("Give Width Size:");
    scanf("%f", &b);

    // Calculate perimeter using the formula: 2 × (a + b)
    perimeter = 2 * (a+b);

    // Display the result
    printf("Perimeter of Rectangle: %.2f\n", perimeter);

    /*B*/

    int n, cube;   // Declare variables

    // Take a number from the user
    printf("Give Number: ");
    scanf("%d", &n);

    // Calculate cube of the number
    cube=n*n*n;

    // Display the result
    printf("Cube: %d", cube);

    return 0;   // End of program
}