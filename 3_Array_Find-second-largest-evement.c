#include<stdio.h>
#include<limits.h>
int main(){
    int max1, max2, i;
    int arr[] = {9, 3, 6, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    max1 = max2 = i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("First Largest = %d \n", max1);
    printf("Second largest = %d \n", max2);
    return 0;
}