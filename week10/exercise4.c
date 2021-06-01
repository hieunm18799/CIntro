#include <stdio.h>

#define MAX_ARR 100

int cmpfunc(const void *a, const void *b);
void sortArrDecre(int arr[MAX_ARR], int *length);
void sortArrOddDecre(int arr[MAX_ARR], int *length);

void main()
{
    int arr[MAX_ARR], arr_length;

    printf("Input the array's length: ");
    scanf("%d", &arr_length);
    printf("Input the array's number: ");
    for (int i = 0; i < arr_length; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArrDecre(arr, &arr_length);
    printf("The array after sort by decreasing order: ");
    for (int i = 0; i < arr_length; i++)
        printf("%d ", arr[i]);
    printf("\n");

    sortArrOddDecre(arr, &arr_length);
    printf("The odd array after sort by decreasing order: ");
    for (int i = 0; i < arr_length; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void sortArrDecre(int arr[MAX_ARR], int *length)
{
    qsort(arr, *length, sizeof(int), cmpfunc);
}
void sortArrOddDecre(int arr[MAX_ARR], int *length)
{
    int res[MAX_ARR], res_length = 0;

    for (int i = 0; i < *length; i++)
        if (arr[i] % 2 != 0)
            res[res_length++] = arr[i];
    qsort(res, res_length, sizeof(int), cmpfunc);

    for (int i = 0; i < res_length; i++) arr[i] = res[i];
    *length = res_length;
}