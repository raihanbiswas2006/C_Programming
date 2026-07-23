/*
Take a number (n) from the user and output its cube (n × n × n).
*/
#include<stdio.h>
int main(){

    int n, cube;

    printf("Give Number: ");
    scanf("%d", &n);

    cube=n*n*n;

    printf("Cube: %d", cube);

    return 0;
}