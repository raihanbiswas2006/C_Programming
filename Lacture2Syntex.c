#include <stdio.h>
#include <float.h>

int main() {

    //1st Program
    printf("Raihan Biswas\n");

    //2nd Printing the Size of a Variable
    long long int myVariable = 42;
    printf("Size of myVariable: %d bytes\n", sizeof (myVariable));
    printf ("Size of myVariable: %zu bytes\n", sizeof (myVariable));

    //3rd Value Range of Floating-Point Types
    printf ("Value range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Value range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Value range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    //4th Print the ASCII Value of a Character
    char myChar;
    printf("Enter a character: ");
    scanf("%c", &myChar);

    printf("ASCII value of c is: %d\n", myChar, myChar);

    //5thPrints Next Character in the ASCII Sequence
    char myChar2;
    printf("Enter a character: ");
    scanf("%c", &myChar2);

    char nextChar = myChar2 + 1;
    printf("The next character of &c is: %c\n", myChar2, nextChar);

    return 0;
}