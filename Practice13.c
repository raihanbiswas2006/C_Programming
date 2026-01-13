#include<stdio.h>
int main(){
    char grade = 'C';
    // printf("Give Grade: ");
    // scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excelent");
        break;
    case 'B':
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Ok");
        break;
    case 'F':
        printf("Bad");
        break;
    
    default:
        printf("No");
    }
    printf("Your grade output is: %c\n", grade);

    int num;

    // Prompt the user to enter a number
    printf("\nEnter a number: ");
    scanf("%d", &num);

    // Check if the number is within the range of 10 to 50 (inclusive)
    if (num >= 10 && num <= 50) {
        printf("The number %d is within the range of 10 to 50.\n", num);
    } else {
        printf("The number %d is not within the range of 10 to 50.\n", num);
    }

    return 0;
}