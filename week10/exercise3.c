#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR 100

bool checkEquaArr(int arr1[MAX_ARR], int arr2[MAX_ARR], int arr1_length, int arr2_length);

void main()
{
    int arr1[MAX_ARR], arr1_length, arr2[MAX_ARR], arr2_length;

    printf("Input the first array's length: ");
    scanf("%d", &arr1_length);
    printf("Input the first array's number: ");
    for (int i = 0; i < arr1_length; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Input the second array's length: ");
    scanf("%d", &arr2_length);
    printf("Input the second array's number: ");
    for (int i = 0; i < arr2_length; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (checkEquaArr(arr1, arr2, arr1_length, arr2_length)) printf("The two array is equal!\n");
    else printf("The two array isn't equal!\n");
}

bool checkEquaArr(int arr1[MAX_ARR], int arr2[MAX_ARR], int arr1_length, int arr2_length){
    if (arr1_length != arr2_length) return false;
    for (int i = 1; i < arr2_length; i++) if (arr1[i] != arr2[i]) return false;
    return true;
}