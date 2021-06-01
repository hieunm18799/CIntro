#include <stdio.h>
#include <limits.h>

#define MAX_ARR 100

int sumOddNumber(int arr[MAX_ARR], int length);
int findMinNumber(int arr[MAX_ARR], int length);

void main(){
    int arr[MAX_ARR], arr_length;
    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The sum of the odd number in the array: %d\n", sumOddNumber(arr, arr_length));
    printf("The minimum value in array: %d\n", findMinNumber(arr, arr_length));
}

int sumOddNumber(int arr[MAX_ARR], int length){
    int res = 0;
    for (int i = 0; i < length; i++) 
    if (arr[i] % 2 != 0) res += arr[i];
    return res;
}

int findMinNumber(int arr[MAX_ARR], int length){
    int min = INT_MAX;
    for (int i = 0; i < length; i++)
    if (min > arr[i]) min = arr[i];
    return min;
}