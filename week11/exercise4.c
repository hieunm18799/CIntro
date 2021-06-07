#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR 100

void swap3Float(float *x, float *y, float *z);

void main()
{
    float arr[MAX_ARR];

    printf("Input 3 float: ");
    scanf("%f", &arr[0]);
    scanf("%f", &arr[1]);
    scanf("%f", &arr[2]);

    swap3Float(&arr[0], &arr[1], &arr[2]);
    printf("The value after swap is: %.2f, %.2f and %.2f.\n", arr[0], arr[1], arr[2]);
}

void swap3Float(float *x, float *y, float *z)
{
    float temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}