#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    printf("Wellcome to the Number Guessing Game. \n");
    do
    {
        printf("Enter Your Guess (1-100): ");
        scanf("%d", &guess);
        attempts++;
        if (guess < secretNumber)
        {
            printf("Try Higher.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Try Lower.\n"); /* code */
        }
        else{
            printf("Congratulations! You Guessed the Secret Number %d in %d attampts.\n", secretNumber, attempts);
            break;
        }
    } while (1);
    return 0;
}