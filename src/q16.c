// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.
#include <stdio.h>

void reverseArray(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}