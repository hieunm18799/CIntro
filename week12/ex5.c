#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR 100

void main()
{
    int *arr = (int *)malloc(sizeof(int) * MAX_ARR), *tmp = (int *)malloc(sizeof(int)), *last = (int *)malloc(sizeof(int)), *begin = (int *)malloc(sizeof(int));
    int arr_length = 0;

    printf("Input array length: ");
    scanf("%d", &arr_length);
    printf("Input array's elements: ");
    for (int i = 0; i < arr_length; i++)
        scanf("%d", &arr[i]);

    begin = arr;
    last = (arr + (arr_length - 1));
    for (int i = 0; i < arr_length / 2; i++)
    {
        *tmp = *begin;
        *begin = *last;
        *last = *tmp;
        begin++;
        last--;
    }

    printf("The reverse array: ");
    for (int i = 0; i < arr_length; i++) printf("%d ", arr[i]);
    printf("\n");
}