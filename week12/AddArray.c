#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR 100

int total2Array(double arr1[MAX_ARR], double arr2[MAX_ARR], int arr1_length, int arr2_length, double arr_res[MAX_ARR]);

void main()
{
    double arr1[MAX_ARR]
        , arr2[MAX_ARR]
        , arr_res[MAX_ARR];
    int arr1_length = 0
        , arr2_length = 0
        , arr_res_length = 0;

    printf("Input the first array's length: ");
    scanf("%d", &arr1_length);
    printf("Input the first array's elements: ");
    for (int i = 0; i < arr1_length; i++) scanf("%lf", &arr1[i]);

    printf("Input the second array's length: ");
    scanf("%d", &arr2_length);
    printf("Input the first array's elements: ");
    for (int i = 0; i < arr2_length; i++) scanf("%lf", &arr2[i]); 

    for (int i = 0; i < arr1_length; i++) printf("%.0lf ", arr1[i]);
    printf("\n");
    for (int i = 0; i < arr2_length; i++) printf("%.0lf ", arr2[i]);
    printf("\n");
    
    arr_res_length = total2Array(arr1, arr2, arr1_length, arr2_length, arr_res);

    for (int i = 0; i < arr_res_length; i++) printf("%.0lf ", arr_res[i]);
    printf("\n");
}

int total2Array(double arr1[MAX_ARR], double arr2[MAX_ARR], int arr1_length, int arr2_length, double arr_res[MAX_ARR]) {
    //function return the result array length
    int res = 0;
    if (arr1_length > arr2_length) {
        res = arr1_length;
        for (int i = 0; i < arr2_length; i++) arr_res[i] = arr1[i] + arr2[i];
        for (int i = arr2_length; i < res; i++) arr_res[i] = arr1[i];
    }
    else {
        res = arr2_length;
        for (int i = 0; i < arr1_length; i++) arr_res[i] = arr1[i] + arr2[i];
        for (int i = arr1_length; i < res; i++) arr_res[i] = arr2[i];
    }

    return res;
}