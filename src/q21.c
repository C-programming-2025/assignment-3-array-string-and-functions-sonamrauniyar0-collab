// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
#include <stdio.h>

int calculateFactorial(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * calculateFactorial(n - 1);
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int result = calculateFactorial(n);

    if (result == -1) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d = %d\n", n, result);
    }

    return 0;
}