// Implement a C program to reverse the elements of an array.
#include <stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int rev_arr[5];
    int index = 0;

    for(int i = 4; i >= 0; i--)
    {
        rev_arr[index] = arr[i];
        index++;
    }

    for(int i = 0; i < 5; i++) 
    {
        printf("%d\n", rev_arr[i]);
    }

    return 0;
}