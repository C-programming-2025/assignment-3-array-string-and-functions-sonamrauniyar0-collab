// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>

double convertTemperature(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() 
{
    double celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = convertTemperature(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}