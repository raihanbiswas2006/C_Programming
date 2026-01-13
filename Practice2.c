#include<stdio.h>
int main(){
    int number = 100;
    printf("Give Number: ");
    scanf("%d", &number);

    if (number > 50)
    {
        printf("Number is > 50\n");
    }
    if (number < 50){
        printf("Number is not > 50");
    }

    return 0;
}