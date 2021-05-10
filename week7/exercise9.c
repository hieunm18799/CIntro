#include <stdio.h>

#define VAR1 1.8
#define VAR2 32

int main(void)
{
    int n;
    long res = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) res *= i;
    printf("%d! = %ld", n, res);
    return 0;
}