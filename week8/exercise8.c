#include <stdio.h>

long factorial(int n);

int main()
{
    int n;
    
    printf("A program that compute n!\nInput n: ");
    scanf("%d", &n);
    printf("n! = %ld\n", factorial(n));
    return 0;
}

long factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}