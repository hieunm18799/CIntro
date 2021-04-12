#include <stdio.h>

#define BUFFER 255

int main()
{
    int n, m;
    printf("Enter first number: ");
    scanf("%d", &n);
    printf("Enter first number: ");
    scanf("%d", &m);
    printf("*************************\nSum %d + %d = %d\n*************************\n", n, m, n + m);

    return 0;
}