#include <stdio.h>
#include <float.h>

int main() {

    //3rd Value Range of Floating-Point Types
    printf ("Value range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Value range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Value range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}