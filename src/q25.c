// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.
#include <stdio.h>

int calculatePower(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * calculatePower(base, exp - 1);
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%d", calculatePower(base, exp));
    return 0;
}