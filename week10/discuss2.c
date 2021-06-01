#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR 100

void main()
{
    int arr[MAX_ARR], arr_length, arr_res[MAX_ARR], arr_check[MAX_ARR] = {false}, arr_res_length = 0;

    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++)
    {
        scanf("%d", &arr[i]);
        if (arr_check[arr[i]] == false)
        {
            arr_check[arr[i]] = true;
            arr_res[arr_res_length++] = arr[i];
        }
    }

    if (arr_res_length == 0)
        printf("No number int the array!\n");
    else
    {
        printf("The array with difference number: ");
        for (int i = 0; i < arr_res_length; i++)
            printf("%d ", arr_res[i]);
        printf("\n");
    }
}