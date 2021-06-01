#include <stdio.h>

#define MAX_ARR 100

void reverseArr(float arr[MAX_ARR], int length);

void main(){
    float arr[MAX_ARR];
    int arr_length;
    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++) {
        scanf("%f", &arr[i]);
    }

    reverseArr(arr, arr_length);

    printf("The array after reversed: ");
    for (int i = 0; i < arr_length; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

void reverseArr(float arr[MAX_ARR], int length) {
    float tmp;
    for (int i = 0; i < length / 2; i++){
        tmp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = tmp;
    }
}