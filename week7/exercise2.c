#include <stdio.h>

int main()
{
    int tri;
    printf("Input triangle high: ");
    scanf("%d", &tri);
    for (int i = 1; i <= tri; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}