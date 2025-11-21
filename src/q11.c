// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>

double calculateAverage(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;  
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Array size must be positive.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    double avg = calculateAverage(arr, n);
    printf("Average of the array: %.2f\n", avg);
    return 0;
}