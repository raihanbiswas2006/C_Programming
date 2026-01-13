#include<stdio.h>
int main(){

    //14en C Program to Calculate Simple Interest
    float principle, time, rate, SI;

    /*Input principle,rate and time*/
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /*Calculate simple interest*/
    SI = (principle * time * rate) / 100;

    /*Print the resultant value of SI*/
    printf("simple Interest = %f", SI);

    return 0;
}