#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR 100

bool checkSymmetricArr(int arr[MAX_ARR], int length);

void main(){
    int arr[MAX_ARR], arr_length;
    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++) {
        scanf("%d", &arr[i]);
    }

    if (checkSymmetricArr(arr, arr_length)) printf("The inputed array is symmetric\n");
    else printf("The inputed array isn't symmetric\n");
}

bool checkSymmetricArr(int arr[MAX_ARR], int length) {
    for (int i = 0; i < length / 2; i++) if (arr[i] != arr[length - 1 - i]) return false;
    return true;
}