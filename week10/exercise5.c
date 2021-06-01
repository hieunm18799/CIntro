#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR 100

int numberCountArray(int arr[MAX_ARR], int length, int number);
int lengthSubseq_consecutiveNumbers(int arr[MAX_ARR], int length, int number);
void timesOfAppearance(int arr[MAX_ARR], int length);

void main(){
    int arr[MAX_ARR], arr_length;

    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The times of appearance of 0 in this array is: %d.\n", numberCountArray(arr, arr_length, 0));

    printf("The length of the subsequence that consists the consecutive number 0 is: %d.\n", lengthSubseq_consecutiveNumbers(arr, arr_length, 0));

    timesOfAppearance(arr, arr_length);
}

int numberCountArray(int arr[MAX_ARR], int length, int number) {
    int res = 0;
    for (int i = 0; i < length; i ++) if (arr[i] == number) res++;
    return res;
}

int lengthSubseq_consecutiveNumbers(int arr[MAX_ARR], int length, int number){
    int res = 0, i = 0;
    while (i < length) {
        if (arr[i] == number){
            int j = i;
            do
            {
                i++;
            } while (arr[i] == number);
            if (i - j > res) res = i - j;
        }
        i++;
    }
    return res;
}

void timesOfAppearance(int arr[MAX_ARR], int length){
    int res[MAX_ARR][2] = {0, 0}, res_length = 0;
    bool check[MAX_ARR] = {false};

    for (int i = 0; i < length; i++) {
        if (check[arr[i]] != true) {
            check[arr[i]] = true;
            res[res_length][0] = arr[i];
            res[res_length][1] = i;
            res_length++;
        }
    }

    for (int i = 0; i < res_length; i++) {
        printf("The time of appearance of %d is %d in array.\n", res[i][0], res[i][1] + 1);
    }
}