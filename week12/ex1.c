#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR 100

int countEven(int* arr, int length);

void main() {
    int* arr = (int*) malloc (sizeof(int) * MAX_ARR), arr_length = 0;
    
    printf("Input array length: ");
    scanf("%d", &arr_length);
    printf("Input array's elements: ");
    for (int i = 0; i < arr_length; i++) scanf("%d", &arr[i]);
    
    printf("The number of even numbers in the array: %d\n", countEven(arr, arr_length));
}

int countEven(int* arr, int length) {
    int res = 0;

    for (int i = 0; i < length; i++)
    if (arr[i] % 2 == 0) res++;
    
    return res;
}