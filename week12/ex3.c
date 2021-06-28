#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_ARR 100

void getSale(double** arr, int* length);
double totalSale(double* arr, int length);

void main() {
    double* arr;
    int arr_length;

    getSale(&arr, &arr_length);
    printf("The total sale: %.2lf\n", totalSale(arr, arr_length));
}

void getSale(double** arr, int* length){
    double* res = (double*) malloc (sizeof(double) * MAX_ARR);
    *length = 0;
    
    printf("Input array length: ");
    scanf("%d", length);
    printf("Input array's elements: ");
    for (int i = 0; i < *length; i++) scanf("%lf", &res[i]);
    *arr = res;
}

double totalSale(double* arr, int length) {
    double res = 0;

    for(int i = 0; i < length; i++) res += *(arr++);

    return res;
}