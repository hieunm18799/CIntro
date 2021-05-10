#include <stdio.h>

#define VAR1 1.8
#define VAR2 32

float fahrenheit_to_celsius(float celsius) {
    return VAR1*celsius + VAR2;
}
int main(void)
{
    float tem;
    printf("Input temperatures (Celsius): ");
    scanf("%f", &tem);
    printf("Temperatures converted to fahrenheit: %.2f F", fahrenheit_to_celsius(tem));
    return 0;
}