#include<stdio.h>
#include<math.h>

int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int oldAge = 22;
    int years = 2;
    int newAge = oldAge + years;

    int x,y,z;
    x = y = z = 1;

    int A = 1, B = 2;
    int sum = A + B;
    int multiply = A * B;

    int o, p;
    o = p = 1;
    int q = o + p;

    int power = pow(o,p);
    printf("%d", power);

    printf("\n%d\n", 16%10);

    printf("%d\n", -8%3);
    printf("%d\n", 8%3);

    printf("%d\n", 2 * 2);
    printf("%f\n", 2.0 * 2);
    printf("%f\n", 4.0 / 2.0);

    printf("%d\n", 2.0 * 2 / 3);
    printf("%f\n", 2.0 / 3);

    // Q3
// hear X = (int) or (float)

    int X = (int) 1.999999;
    printf("%d\n", X);

    int Y = 4 + 9 * 10;
    printf("%d\n", Y);

    int X1 = 4 * 3 / 2;
    printf("%d\n", X1);

    // Q4

    int math1 = 5 * 2 - 3 * 2;
    printf("a. %d\n", math1);

    int math2 = 5 * 2 / 2 * 3;
    printf("b. %d\n", math2);

    int math3 = 5 * (2 / 2) * 3;
    printf("c. %d\n", math3);

    int math4 = 5 + 2 / 2 * 3;
    printf("d. %d\n", math4);

    printf("%d\n", 4 == 4);
    printf("%d\n", 4 == 3);

    printf("%d\n", 4 > 3);
    printf("%d\n", 3 > 4);
    printf("%d\n", 3 > 3);
    printf("%d\n", 3 >= 3);

    printf("%d\n", 3 < 4);
    printf("%d\n", 3 <= 3);
    printf("%d\n", 4 < 3);
    printf("%d\n", 4 < 5);

    printf("%d\n", 4 != 4);
    printf("%d\n", 5 == 5);
    printf("%d\n", 4 != 3);
    printf("%d\n", 5 == 4);

    printf("%d\n", 4>3 && 5>2);
    printf("%d\n", 3>4 && 5>2);

    printf("%d\n", 4>3 || 5>2);
    printf("%d\n", 3>4 || 5>2);

    printf("%d\n", !((5>1) && (3>4)));

    printf("%d\n", a + b);
    printf("%d\n", a += b);// a = a + b
    printf("%d\n", a *= b);// a = a * b
    printf("%d\n", A -= B);// a = A - B

    // Q5 , Q6
    // even -> 1
    //odd -> 0
    
    int modelo1;
    printf("Enter a number: ");
    scanf("%d", &modelo1);
    printf("%d\n", modelo1 % 2 == 0);
    
    //Q7

    printf("%d\n", 8^8);
    // a. int a = 8^8 -> valid
    // b. int x; int y = x; -> valid
    // c. int x, y = x; -> invalid
    // d. char stars = '**'; -> invalid

    return 0;
}