#include <stdio.h>

double fahrenheitToCelsius(double fahrenheit);

int main(void)
{
    printf("Table of the Fahrenheit temperature 0 though 20 and their Celsius equivalents:\n");
    printf("Fahrenheit\tCelcius\n");
    for (double i = 0; i <= 20; i++)
        printf("%-10.2lf\t%-10.2lf\n", i, fahrenheitToCelsius(i));

    return 0;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return ((fahrenheit - 32)*5/9);
}