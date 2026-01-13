#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number: ");
    scanf("%d", &number);

    if(number == 5){ ///"=="Equal Sign
        printf("Then Number is %d\n", number);
    }
    if(number != 5){ ///"!="Not Equal Sign
       printf("Then Number is Not %d\n", number);
    }
    

    return 0;
}