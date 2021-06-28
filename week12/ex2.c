#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_ARR 100

double* maximum(double* arr, int length);

void main() {
    double* arr = (double*) malloc (sizeof(double) * MAX_ARR);
    int arr_length = 0;
    
    printf("Input array length: ");
    scanf("%d", &arr_length);
    printf("Input array's elements: ");
    for (int i = 0; i < arr_length; i++) scanf("%lf", &arr[i]);
    
    printf("The maximum value of an array of double's: %.2lf\n", *(maximum(arr, arr_length)));
}

double* maximum(double* arr, int length) {
    double* res = arr;

    if (length <= 0) return NULL;

    for (int i = 1; i < length; i++)
    if (*(++arr) > *res) res = arr;

    return res;
}