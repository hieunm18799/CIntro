#include <stdio.h>

#define MAX_ARR 100

int sumOfLocalMaximumNumber(int arr[MAX_ARR], int length);

void main(){
    int arr[MAX_ARR], arr_length;
    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The sum of the local maximum numbers in this array: %d\n", sumOfLocalMaximumNumber(arr, arr_length));
}

int sumOfLocalMaximumNumber(int arr[MAX_ARR], int length) {
    int res = 0;
    for (int i = 1; i < length-1; i++)
    if (arr[i] > arr[i - 1] && arr[i] > arr[i+1]) res += arr[i];
    return res;
}