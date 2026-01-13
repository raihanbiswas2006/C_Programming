#include <stdio.h>

int main() {

    //1st Program
    printf("Raihan Biswas\n");

    //2nd Printing the Size of a Variable
    long long int myVariable = 42;
    printf("Size of myVariable: %d bytes\n", sizeof (myVariable));
    printf ("Size of myVariable: %zu bytes\n", sizeof (myVariable));

    return 0;
}