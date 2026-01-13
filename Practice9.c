#include<stdio.h>
int main(){

    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("Positive Even.");
        }
        else
        {
            printf("Positive Odd.");
        }
    }
    else
    {
        printf("Negative Number.");
    }

    return 0;
}