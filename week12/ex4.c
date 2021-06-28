#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_ARR 100

void main()
{
    int *arr = (int *)malloc(sizeof(int) * MAX_ARR);
    int arr_length = 0;

    printf("Input array length: ");
    scanf("%d", &arr_length);
    printf("Input array's elements: ");
    for (int i = 0; i < arr_length; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < arr_length; i++)
    {
        for (int j = i + 1; j <= arr_length; j++)
        {
            for (int k = i; k < j; k++) printf("%d ", arr[k]);
            printf("\n");
        }
    }
}