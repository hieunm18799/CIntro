#include <stdio.h>

int findIntMax(int *a);

int main()
{
    int arr[] = {3, 4, 4, 5, 123, 5, 1, 2};
    printf("Maximum value in array: %d\n", findIntMax(arr));
    return 0;
}

int findIntMax(int *a){
    int max = a[0];
    for (int i = 1; i < sizeof(a); i++){
        if (a[i] > max) max = a[i];
    }
    return max;
}