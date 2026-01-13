#include<stdio.h>
int main(){

    //12th Convert Centimeter to Meter and Kilometer
    float cm,meter,km;

    /*Input lengthin centimeterfrom user*/
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    /*Convert centimeter into meter and kilometer*/
    meter = cm / 100.0;
    km = cm / 100000.0;

    printf("Length in Meter = %.2fm\n", meter);
    printf("Length in Kilometer = %.2fkm", km);

    return 0;
}