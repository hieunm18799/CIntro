#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 100

int *reverseIntArray(int *a);

int main()
{
    int arr[] = {3, 4, 4, 5, 123, 5, 1, 2}, *res;
    res = reverseIntArray(arr);
    printf("Reverse array: ");
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}

int *reverseIntArray(int *a){
    int *tmp;
    tmp = (int*)malloc(sizeof(int)*MAX_ARRAY);
    for (int i = 0; i < sizeof(a); i++){
        tmp[sizeof(a) - 1 - i] = a[i];
    }
    return tmp;
}