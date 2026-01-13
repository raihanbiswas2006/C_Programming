#include<stdio.h>
int main() {

      int num1, num2, num3;
      printf("Enter Three Number: ");
      scanf("%d%d%d", &num1, &num2, &num3);

      if (num1 >= num2 && num1 >= num3) {
        printf("Largest Number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("Llargest Number is: %d\n", num2);
    }
    else {
        printf("Largest Number is: %d\n", num3);
    }

return 0;
}
