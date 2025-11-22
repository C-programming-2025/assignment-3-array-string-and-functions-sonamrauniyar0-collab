// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
#include <stdio.h>
int calculateFibonacci(int n) {
    if (n < 0) {
        return -1; // invalid input
    }
    if (n == 0) {
        return 0; // base case 1
    }
    if (n == 1) {
        return 1; // base case 2
    }
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2); // recursive relation
}
int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    int result = calculateFibonacci(n);
    if (result == -1) {
        printf("Fibonacci not defined for negative numbers.\n");
    } else {
        printf("Fibonacci (%d) = %d\n", n, result);
    }
    return 0;
}