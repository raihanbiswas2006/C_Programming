#include<stdio.h>
int main(){

    char ch = 'm';
    printf("Time code: %c\n", ch);

    switch (ch)
    {
    case 'a':
        printf("Good Afternoon\n");
        break;
    case 'e':
        printf("Good Evening\n");
    break;

    case 'm':
    printf("Good Morning\n");
    
    default:
        break;
    }

    return 0;
}