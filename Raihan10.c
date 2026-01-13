#include<stdio.h>
int main(){

    //11th convert temperature from Celsius to Fahrenheit
    float celsius, fahrenheit;

    /*Input temperature in Celsius:*/
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /*Celsius to Fahrenheit Conversion Formula*/
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}