#include<stdio.h>
int main(){

    char ch = 'e';
    printf("Time Code: %c\n", ch);
    if (ch == 'm')
    {
        printf("Time is Morning");
    }
    else if (ch == 'a')
    {
        printf("Time is Afternoon\n");
    }
    else
    printf("Good Evening");

    return 0;
}