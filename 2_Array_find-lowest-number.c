#include<stdio.h>
int main(){
    int arr[100];
    int i, n, sum = 0, lowest;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    printf("Enter %d Elements in the Array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    lowest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (lowest > arr[i])
        {
            lowest = arr[i]; /* code */
        }
    }
    printf("Lowest Elemint of The Array = %d \n", lowest);
    return 0;
}