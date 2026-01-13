#include<stdio.h>
#include<math.h>
// Q8
int main(){
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);

    // & or

    int isMonday = 0;
    int isRainning = 1;
    printf("%d\n", isMonday || isRainning);

    int x;
    printf("Enter Number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);

    int num1, num2, num3, average;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1+num2+num3)/3;
    printf("The Average is: %.2d\n", average);

    //increment operator
    //++i (pre increment)
    //i++ (post increment operator)

    //--i (pre decrement)
    //i-- (post decrement)

    int i=1;
    //printf("%d \n", i++); //use, then increase
    //printf("%d \n", i);

    //printf("%d \n", ++i); //increase, then use
    //printf("%d \n", i);

    // printf("%d \n", --i);
    // printf("%d \n", i--);

    for (float i=1.0; i<=5.0; i++){
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }

    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i; //sum += i
    }
    printf("sum is %d \n", sum);

    printf("OK");

    return 0;
}