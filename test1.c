#include<stdio.h>
int main(){

    printf("Hello World\n");
    printf("I am Raihan Biswas.\n");
    printf("This is my first program.\n");
    printf("Hi\tHello\n");
    printf("Hi\n\n\nHello");
    printf("\n*\n");
    printf("**\n");
    printf("***\n");
    printf("I\nLove\nBangladesh.\nLet me go.\n");
    printf("This is my first program.\n");
    //printf("Let Me Go!\n");
    printf("My salary %d taka.\n",1000000);
    printf("%d + %d = %d\n",10,5,200);
    printf("This hash chracter is: %c\n",'#');
    printf("My hight: %f feet and weight: %d kg.\n",5.10,60);

    int x = 10;
    int y = 20;
    printf("%d + %d = %d\n",x,y,x+y);
    x = x*y-20;
    printf("Final value of x is: %d\n",x);

    int a;
    int b;
    a = 10;
    b = 40;
    printf("%d\n",a+b);
    printf("%d\n",a*b);

    int age = 22;
    printf("age is %d\n", age);
    float pi = 3.14;
    printf("age is %f\n", pi);
    char star = '*';
    printf("Star is %c\n", star);

    int c, d;
    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    int sum = c + d;
    printf("sum is: %d", sum);

    return 0;
}