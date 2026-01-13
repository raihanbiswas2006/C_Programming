#include <stdio.h>
int main() {

    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The Number is Even.\n");
    }
    else if (n % 2 != 0)
    {
        printf("The Number is Odd.\n");
    }
    else
    {
        printf("The Number is Invalid.\n");
    }

    return 0;
}