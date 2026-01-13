#include<stdio.h>
int main(){

    int arr[100];
    int i, n, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter %d Elements in the Array: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); /* code */
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all Array = %d \n", sum);

    return 0;
}