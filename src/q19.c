//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>

void calculateFactorialSeries(int n) {
    if (n < 0) {
        printf("Factorial series is not defined for negative numbers.\n");
        return;
    }

    unsigned long long factorial = 1;
    printf("Factorial series up to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        printf("%llu ", factorial);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Enter a non-negative integer.\n");
        return 1;
    }
    calculateFactorialSeries(n);
    return 0;
}