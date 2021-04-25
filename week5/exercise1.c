#include <stdio.h>

#define KTM 1/1.609344

int main()
{
    double km = 0;
    printf("Input the kilometers: ");
    scanf("%lf", &km);
    printf("Miles value: %.2lf\n", km * KTM);
    return 0;
}