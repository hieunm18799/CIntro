#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 100

int hnt(int n);

int main()
{
    int n;
    printf("Number of layer: ");
    scanf("%d", &n);
    printf("Result: %d\n", hnt(n));

    return 0;
}

int hnt(int n){
    if (n == 1) return 1;
    return 1 + 2*hnt(n - 1);
}