// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include <stdio.h>

long long calculatePower(int base, int exponent) 
{
    long long result = 1;
    if (exponent < 0) 
    {
        printf("Negative exponent not supported.\n");
        return -1;
    }
    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }
    return result;
}

int main() 
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    long long power = calculatePower(base, exponent);

    if (power != -1) 
    {
        printf("%d raised to the power %d is %lld\n", base, exponent, power);
    }
    return 0;
}