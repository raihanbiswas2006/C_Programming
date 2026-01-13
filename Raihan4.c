#include <stdio.h>

int main() {

    //5th Prints Next Character in the ASCII Sequence
    char myChar;
    printf("Enter a character: ");
    scanf("%c", &myChar);

    char nextChar = myChar + 1;
    printf("The next character of %c is: %c\n", myChar, nextChar);
    
    return 0;
}